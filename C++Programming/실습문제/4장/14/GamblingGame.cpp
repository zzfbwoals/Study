#include "GamblingGame.h"
#include "Player.h"
#include <string>
#include <iostream>
using namespace std;

void GameblingGame::run()
{
	cout << "***** 갬블링 게임을 시작합니다. *****" << endl;
	srand((unsigned)time(0));
	Player p[2];
	string tmp;
	cout << "첫번째 선수 이름>>";
	cin >> tmp;
	p[0].setName(tmp);
	cout << "두번째 선수 이름>>";
	cin >> tmp;
	p[1].setName(tmp);
	cin.ignore();  // 입력 버퍼에 남아 있는 개행 문자 제거

	int i = 0;
	while (true)
	{
		string enter;
		int x = rand() % 3 + 1;
		int y = rand() % 3 + 1;
		int z = rand() % 3 + 1;
		if(i==2)
			i = 0;
		cout << p[i].getName() << ":<Enter>";
		getline(cin, enter, '\n');
		cout << "\t" << x << "\t" << y << "\t" << z << "\t";
		if (x == y && y == z)
		{
			cout << p[i++].getName() << "님 승리!!" << endl;
			break;
		}
		else
		{
			i++;
			cout << "아쉽군요!" << endl;
		}
	}
}