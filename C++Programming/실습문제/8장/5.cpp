#include <iostream>
#include <string>
using namespace std;

class BaseArray {
	int capacity; // 배열의 크기
	int* mem; // 정수 배열을 만ㄷ르기 위한 메모리의 포인터
protected:
	BaseArray(int capacity = 100) { this->capacity = capacity; mem = new int[capacity]; }
	~BaseArray() { delete[]mem; }
	void put(int index, int val) { mem[index] = val; }
	int get(int index) { return mem[index]; }
	int getCapacity() { return capacity; }
};

class MyQueue : public BaseArray {
	int front;
	int rear;
public:
	MyQueue(int capacity = 100) : BaseArray(capacity) { front = 0; rear = 0; }
	int capacity() { return getCapacity(); }
	int length() { return rear-front; }
	bool is_empty() { return front == rear; }
	bool is_full() { return rear % getCapacity() + 1 == front; }
	void enqueue(int n) {
		if (is_full())
		{
			cout << "Queue is full!" << endl;
			return;
		}
		else
		{
			put(rear, n);
			rear++;
		}
	}
	int dequeue() {
		if (is_empty())
		{
			cout << "Queue is empty!" << endl;
			return 0;
		}
		else
		{
			int temp = get(front);
			front++;
			return temp;
		}
	}
};

int main()
{
	MyQueue mQ(100);
	int n;
	cout << "큐에 삽입할 5개의 정수를 입력하라>> ";
	for (int i = 0; i < 5; i++)
	{
		cin >> n;
		mQ.enqueue(n);
	}
	cout << "큐의 용량:" << mQ.capacity() << ", 큐의 크기:" << mQ.length() << endl;
	cout << "큐의 원소를 순서대로 제거하여 출력한다>> ";
	while (mQ.length() != 0)
	{
		cout << mQ.dequeue() << ' ';
	}
	cout << endl << "큐의 현재 크기 : " << mQ.length() << endl;
}