#include "Circle.h"
#include <iostream>
using namespace std;

int main()
{
	cout << "원의 개수 >> ";
	int n;
	cin >> n;
	Circle* cir = new Circle[n];
	int count = 0;
	for (int i = 0; i < n; i++)
	{
		cout << "원 " << i + 1 << "의 반지름 >> ";
		int n;
		cin >> n;
		(cir+i)->setRadius(n);
		if ((cir+i)->getArea() > 100)
			count++;
	}
	cout << "면적이 100보다 큰 원은 " << count << "개 입니다" << endl;
	delete[] cir;
	return 0;
}