#include "Circle.h"
#include <iostream>
using namespace std;

int main()
{
	int count = 0;
	Circle cir[3];
	for (int i = 0; i < 3; i++)
	{
		cout << "원 " << i + 1 << "의 반지름 >> ";
		int n;
		cin >> n;
		cir[i].setRadius(n);
		if (cir[i].getArea() > 100)
			count++;
	}
	cout << "면적이 100보다 큰 원은 " << count << "개 입니다" << endl;
	return 0;
}