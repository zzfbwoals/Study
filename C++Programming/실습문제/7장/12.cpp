#include <iostream>
using namespace std;

class SortedArray
{
	int size; // 현재 배열의 크기
	int* p; // 정수 배열에 대한 포인터
	void sort() // 정수 배열을 오름차순으로 정렬
	{
		for (int i = 0; i < size - 1; i++)
		{
			for (int j = i + 1; j < size; j++)
			{
				if (p[i] > p[j])
				{
					int temp = p[i];
					p[i] = p[j];
					p[j] = temp;
				}
			}
		}
	}
public:
	SortedArray() // p는 NULL로 size는 0으로 초기화
	{
		p = NULL; size = 0;
	}
	SortedArray(const SortedArray& src) // 복사 생성자
	{
		this->p = new int [src.size];
		for (int i = 0; i < size; i++)
			*(this->p + i) = *(src.p + i);
		this->size = src.size;
		sort();
	}
	SortedArray(int p[], int size) // 생성자. 정수 배열과 크기를 전달받음
	{
		this->size = size;
		this->p = new int[size];
		for (int i = 0; i < size; i++)
			this->p[i] = p[i];
		sort();
	}
	~SortedArray() // 소멸자
	{ 
		delete[]p; 
	}
	SortedArray operator + (const SortedArray& op2) // 현재 배열에 op2 배열 추가
	{
		SortedArray temp;
		temp.size = this->size + op2.size;
		temp.p = new int[temp.size];
		for (int i = 0; i < this->size; i++)
			temp.p[i] = this->p[i];
		for (int i = 0; i < op2.size; i++)
			temp.p[this->size + i] = op2.p[i];
		temp.sort();
		return temp;
	}
	SortedArray& operator = (const SortedArray& op2) // 현재 배열에 op2 배열 복사
	{
		delete[]this->p; // 원래 있던 요소 삭제
		this->size = op2.size;
		this->p = new int[this->size];
		for (int i = 0; i < size; i++)
			this->p[i] = op2.p[i];
		this->sort();
		return *this;
	}
	void show() // 배열의 원소 출력
	{
		cout << "배열 출력 : ";
		for (int i = 0; i < size; i++)
			cout << *(p + i) << ' ';
		cout << endl;
	}
};

int main()
{
	int n[] = { 2,20,6 };
	int m[] = { 10,7,8,30 };
	SortedArray a(n, 3), b(m, 4), c;

	c = a + b; // +, = 연산자 필요
	// + 연산자가 SortedArray 객체를 리턴하므로 복사 생성자 필요

	a.show();
	b.show();
	c.show();
}