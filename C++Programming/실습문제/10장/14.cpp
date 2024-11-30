#include <iostream>
#include <string>
#include <map>
using namespace std;

class PasswordManager {
	string program;
	map<string, string> passwordMap;
	void add();
	void search();
	bool checkInputError();
public:
	PasswordManager(string);
	void run();
};

PasswordManager::PasswordManager(string program = "") { this->program = program; }

void PasswordManager::add() {
	cout << "이름 암호>> ";
	string name, pass;
	cin >> name >> pass;
	passwordMap[name] = pass;
}

void PasswordManager::search() {
	cout << "이름? ";
	string name; cin >> name;
	while (true) {
		cout << "암호? ";
		string pass; cin >> pass;
		if (passwordMap[name] == pass) {
			cout << "통과!!" << endl;
			break;
		}
		else
			cout << "실패~~" << endl;
	}
}

bool PasswordManager::checkInputError() {
	if (cin.fail()) {
		cin.clear(); // 오류 플래그를 지웁니다.
		cin.ignore(numeric_limits<streamsize>::max(), '\n'); // 입력 버퍼를 비웁니다.
		return true; // 오류가 발생했음을 반환합니다.
	}
	return false; // 오류가 없음을 반환합니다.
}

void PasswordManager::run() {
	cout << "***** 암호관리 프로그램 WHO를 시작합니다 *****" << endl;
	while (true) {
		cout << "삽입:1, 검사:2, 종료:3>> ";
		int cmd; cin >> cmd;

		if (checkInputError()) {
			cout << "정수를 입력해주세요." << endl;
			continue;
		}
		if (cmd == 1) add();
		else if (cmd == 2) search();
		else if (cmd == 3) break;
		else cout << "올바른 값을 입력해주세요." << endl;
	}
}

int main() {
	PasswordManager pm;
	pm.run();
}