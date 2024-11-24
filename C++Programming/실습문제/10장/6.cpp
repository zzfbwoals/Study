#include <iostream>
using namespace std;

template <class T>
T* remove(T src[], int sizeSrc, T minus[], int sizeMinus, int& retSize) {
	T* temp;
	retSize = sizeSrc;
	for (int i = 0; i < sizeSrc; i++) {
		for (int j = 0; j < sizeMinus; j++) {
			if (src[i] == minus[j]) {
				retSize--;
				break;
			}
		}
	}
	temp = new T[retSize];
	int index = 0;
	for (int i = 0; i < sizeSrc; i++) {
		bool found = false;
		for (int j = 0; j < sizeMinus; j++) {
			if (src[i] == minus[j]) {
				found = true;
				break;
			}
		}
		if (!found) {
			temp[index++] = src[i];
		}
	}
	return temp;
}

int main()
{
	int retSize = 0;
	int x[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int y[] = { 2, 4, 6, 8, 10 };
	int* newXY = remove(x, 10, y, 5, retSize);
	for (int i = 0; i < retSize; i++) cout << newXY[i] << ' ';
}