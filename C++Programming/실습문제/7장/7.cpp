#include <iostream>
using namespace std;

class Matrix {
	int arr[4];
public:
	Matrix(int a = 0, int b = 0, int c = 0, int d = 0) { arr[0] = a; arr[1] = b; arr[2] = c; arr[3] = d; }
	void show()
	{
		cout << "Matrix = { " << arr[0] << ' ' << arr[1] << ' ' << arr[2] << ' ' << arr[3] << " }" << endl;
	}
	/* (1)번
	void operator>>(int arr[])
	{
		for (int i = 0; i < 4; i++)
			arr[i] = this->arr[i];
	}
	Matrix& operator<<(int arr[])
	{
		for (int i = 0; i < 4; i++)
			this->arr[i] = arr[i];
		return *this;
	}
	*/
	friend void operator>>(Matrix x, int arr[]);
	friend Matrix& operator<<(Matrix& x, int arr[]);
};
// (2)번
void operator>>(Matrix x, int arr[])
{
	for (int i = 0; i < 4; i++)
		arr[i] = x.arr[i];
}

Matrix& operator<<(Matrix& x, int arr[])
{
	for (int i = 0; i < 4; i++)
		x.arr[i] = arr[i];
	return x;
}

int main()
{
	Matrix a(4, 3, 2, 1), b;
	int x[4], y[4] = { 1,2,3,4 };
	a >> x; // a의 각 원소를 배열 x에 복사
	b << y; // 배열 y의 원소 값을 b의 각 원소에 설정

	for (int i = 0; i < 4; i++) cout << x[i] << ' ';
	cout << endl;
	b.show();
}