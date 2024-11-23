#include <iostream>
using namespace std;

class AbstractStack {
public:
	virtual bool push(int n) = 0;
	virtual bool pop(int& n) = 0;
	virtual int size() = 0;
};
class IntStack : public AbstractStack {
	int top;
	int* arr;
	int capacity;
public:
	int size() {
		return capacity;
	}
	IntStack(int size = 0) { this->top = -1; this->arr = new int[size]; capacity = size; }
	~IntStack() { delete[]arr; }
	bool push(int n) {
		if (top == size()) return false;
		arr[++top] = n;
		return true;
	}
	bool pop(int &n) {
		if (top == -1) return false;
		n = arr[top--];
		return true;
	}
};

int main()
{
	IntStack stack(100);
	for (int i = 0; i < 5; i++)
	{
		if (stack.push(i)) cout << i << " push" << endl;
		else cout << "stack is full!" << endl;
	}
	int n;
	while (stack.pop(n)) cout << n << " pop" << endl;
}