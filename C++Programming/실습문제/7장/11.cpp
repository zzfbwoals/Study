#include <iostream>
using namespace std;

class Stack
{
	int arr[100];
	int top = -1;
public:
	Stack& operator<<(int n)
	{
		if (top < 100)
			arr[++top] = n;
		else
			cout << "Stack Overflow" << endl;
		return *this;
	}
	bool operator!()
	{
		return this->top == -1;
	}
	int& operator>>(int& n)
	{
		if (!this)
			cout << "isEmpty!" << endl;
		else
			n = arr[top--];
		return n;
	}
};

int main()
{
	Stack stack;
	stack << 3 << 5 << 10;
	while (true)
	{
		if (!stack) break;
		int x;
		stack >> x;
		cout << x << ' ';
	}
	cout << endl;
}