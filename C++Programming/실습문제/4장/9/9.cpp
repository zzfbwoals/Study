#include <iostream>
#include "Person.h"
#include <string>
#include <sstream>
using namespace std;

int main()
{
	cout << "이름과 전화 번호를 입력해 주세요" << endl;
	Person p[3];
	for (int i = 0; i < 3; i++)
	{
		cout << "사람 " << i + 1 << ">> ";
		string text;
		getline(cin, text);

		istringstream iss(text);
		string tmp;
		getline(iss, tmp, ' ');
		string name = tmp;
		getline(iss, tmp, ' ');
		string number = tmp;

		p[i].set(name, number);
	}
	cout << "모든 사람의 이름은 " << p[0].getName() << ' ' << p[1].getName() << ' ' << p[2].getName() << endl;
	cout << "전화번호 검색합니다. 이름을 입력하세요>>";
	string search;
	cin >> search;
	for (int i = 0; i < 3; i++)
	{
		if (p[i].getName() == search)
		{
			cout << "전화 번호는 " << p[i].getTel();
			break;
		}
		else
		{
			cout << "그런 이름은 없습니다" << endl;
		}
	}
	return 0;
}