#include <iostream>
using namespace std;

template <class T>
T* concat(T* a, int sizeA, T* b, int sizeB) {
	T* temp = new T[sizeA + sizeB];
	int indexTmp = 0;
	for (int i = 0; i < sizeA; i++) {
		temp[indexTmp] = a[i];
		indexTmp++;
	}
	for (int i = 0; i < sizeB; i++) {
		temp[indexTmp] = b[i];
		indexTmp++;
	}
	return temp;
}

int main()
{
	int x[] = { 1, 2, 3, 4 };
	int y[] = { 5, 6, 7, 8, 9, 10 };
	int* newXY = concat(x, 4, y, 6);
	for (int i = 0; i < 10; i++) cout << newXY[i] << ' ';
}