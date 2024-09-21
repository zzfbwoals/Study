#include "CircleManager.h"
#include <iostream>
#include <string>
using namespace std;

void CircleManager::searchByName()
{
	cout << "검색하고자 하는 원의 이름 >> ";
	string name;
	cin >> name;
	for (int i = 0; i < size; i++)
	{
		if (name == (p + i)->getName())
		{
			cout << "도넛의 면적은 " << (p + i)->getArea() << endl;
			break;
		}
	}
}

void CircleManager::searchByArea()
{
	cout << "최소 면적을 정수로 입력하세요 >> ";
	int area;
	cin >> area;
	for (int i = 0; i < size; i++)
	{
		if (area <= (p + i)->getArea())
		{
			cout << (p + i)->getName() << "의 면적은 " << (p + i)->getArea() << ",";
		}
	}
	cout << endl;
}