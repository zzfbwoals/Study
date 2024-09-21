#include "Family.h"
#include <iostream>
using namespace std;

void Family::show()
{
	cout << name << "가족은 다음과 같이 " << size << "명 입니다." << endl;
	for (int i=0; i<size; i++)
	{
		cout << (p + i)->getName() << "\t";
	}
}

void Family::setName(int i, string name)
{
	(p + i)->setName(name);
}