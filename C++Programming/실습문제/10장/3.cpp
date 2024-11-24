#include <iostream>
using namespace std;
#define SWAP(x,y,t) (t=x, x=y, y=t)

template <class T>
void reverseArray(T& arr, int size) {
	int start = 0;
	int end = size - 1;
	int temp;
	while (start < end) {
		SWAP(arr[start], arr[end], temp);
		start++; end--;
	}
}

int main()
{
	int x[] = { 1, 10, 100, 5, 4 };
	reverseArray(x, 5);
	for (int i = 0; i < 5; i++) cout << x[i] << ' ';
}