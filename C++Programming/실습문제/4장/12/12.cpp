#include "CircleManager.h"
#include <iostream>
using namespace std;

int main()
{
	cout << "원의 개수 >> ";
	int num;
	cin >> num;
	CircleManager cm(num);
	for (int i = 0; i < num; i++)
	{
		cout << "원 " << i + 1 << "의 이름과 반지름 >> ";
		string name; int radius;
		cin >> name >> radius;
		cm.getCircle(i)->setCircle(name, radius);
	}
	cm.searchByName();
	cm.searchByArea();
	return 0;
}