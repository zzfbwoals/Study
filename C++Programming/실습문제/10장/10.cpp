#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include <cstdlib>
using namespace std;

class Nation {
	string nation;
	string capital;
public:
	Nation(string nation = "", string capital = "") { this->nation = nation; this->capital = capital; }
	string getNation() { return nation; }
	string getCapital() { return capital; }
};

class Game {
	vector<Nation> v;
	bool check(string nation) {
		for (int i = 0; i < v.size(); i++) {
			if (v[i].getNation() == nation) return true;
		}
		return false;
	}
	void insert() {
		cout << "현재 " << v.size() << "개의 나라가 입력되어 있습니다." << endl;
		cout << "나라와 수도를 입력하세요(no no 이면 입력끝)" << endl;
		while (true) {
			cout << v.size() + 1 << ">>";
			string nation, capital; cin >> nation >> capital;
			if (nation == "no" && capital == "no") break;
			if (check(nation)) {
				cout << "already exists !!" << endl;
				break;
			}
			Nation temp(nation, capital);
			v.push_back(temp);
		}
	}
	void quiz() {
		while (true) {
			int nation = rand() % v.size();
			string capital;
			cout << v[nation].getNation() << "의 수도는?";
			cin >> capital;
			if (capital == "exit") break;
			if (v[nation].getCapital() == capital) cout << "Correct !!" << endl;
			else cout << "No !!" << endl;
		}
	}
public:
	Game() {
		Nation nation[10] = { {"한국", "서울"}, {"독알", "베를린"}, {"이탈리아", "로마"}, {"일본", "도쿄"}, {"중국", "베이징"},
	{"프랑스", "파리"}, {"영국", "런던"}, {"스페인", "마드리드"}, {"러시아", "모스크바"}, {"호주", "캔버라"} };
		for (int i = 0; i < 10; i++) v.push_back(nation[i]);
	}
	void seed() { srand((unsigned)time(0)); }
	void run() {
		cout << "***** 나라의 수도 맞추기 게임을 시작합니다. *****" << endl;
		while (true) {
			cout << "정보 입력: 1, 퀴즈: 2, 종료: 3 >> ";
			int cmd; cin >> cmd;
			if (cmd == 1) insert();
			else if (cmd == 2) quiz();
			else if (cmd == 3) break;
			else {
				cout << "올바른 값을 입력해주세요." << endl;
				continue;
			}
		}
	}
};

int main()
{
	Game game;
	game.seed();
	game.run();
}