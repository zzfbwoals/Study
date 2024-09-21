#include "WordGame.h"
#include "Player.h"
#include <iostream>
using namespace std;

void WordGame::run()
{
	cout << "끝말 잇기 게임을 시작합니다" << endl << "게임에 참가하는 인원은 몇명입니까?";
	int num;
	cin >> num;
	// 플레이어 설정
	Player* p = new Player[num];
	for (int i = 0; i < num; i++)
	{
		cout << "참가자의 이름을 입력하세요. 빈칸 없이>>";
		string name;
		cin >> name;
		(p + i)->setName(name);
	}
	// 끝말잇기 시작
	cout << "시작하는 단어는 아버지입니다" << endl;
	string a = "아버지";
	string b;
	while (true)
	{
		bool end = false; // 틀렸나 안틀렸나
		for (int i = 0; i < num; i++)
		{
			cout << (p + i)->getName() << ">>";
			cin >> b;
			int aSize = a.size();
			if (a.at(aSize - 2) == b.at(0) && a.at(aSize - 1) == b.at(1)) // 끝말잇기 성공
			{
				a = b;
			}
			else // 끝말잇기 실패
			{
				cout << "실패!!" << endl << "게임을 종료합니다 ..." << endl;
				end = true;
				break;
			}
		}
		if (end)
			break;
	}
}