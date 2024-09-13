/*
한 라인에 ';'으로 5개의 이름을 구분하여 입력받아,
각 이름을 끊어내어 화면에 출력하고 가장 긴 이름을 판별하라.
*/
#include <iostream>
#include <cstring>
using namespace std;

void run()
{
    char name[100];
	cout << "5 명의 이름을 ';'으로 구분하여 입력하세요" << endl;
	cout << ">>";
	int length = 0; char longName[50];
	for (int i = 0; i < 5; i++)
	{
		cin.getline(name, 100, ';');
		cout << i + 1 << " : " << name << endl;
		if (length < strlen(name))
		{
			length = strlen(name);
			strcpy(longName, name);
		}
	}
	cout << "가장 긴 이름은 " << longName << endl;
}

int main()
{
    run();
    return 0;
}