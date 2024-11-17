// 20214045_류재민_10장_!3번
#include <iostream>
#include <string>
#include <map>
using namespace std;

// HighScore 클래스 정의
class HighScore {
	map<string, int> m; // 이름과 점수를 저장하는 map 컨테이너
public:
	void insert(); // 점수 삽입 함수
	void check(); // 점수 조회 함수
	void run(); // 프로그램 실행 함수
};

// 점수 삽입 함수
void HighScore::insert() {
	cout << "이름과 점수>> ";
	string name;
	int score;
	cin >> name >> score; // 이름과 점수 입력 받기
	m[name] = score; // map에 이름과 점수 저장
}

// 점수 조회 함수
void HighScore::check() {
	cout << "이름>> ";
	string name;
	cin >> name; // 이름 입력 받기
	cout << name << "의 점수는 " << m[name] << endl; // 해당 이름의 점수 출력
}

// 프로그램 실행 함수
void HighScore::run() {
	cout << "***** 점수관리 프로그램 HIGH SCORE을 시작합니다 *****" << endl;
	while (true)
	{
		cout << "입력:1, 조회:2, 종료:3 >> ";
		int cmd;
		cin >> cmd; // 사용자 명령 입력 받기
		if (cmd == 3) break; // 종료 명령
		else if (cmd == 1) insert(); // 점수 삽입
		else if (cmd == 2) check(); // 점수 조회
		else cout << "1~3 의 값을 입력해주세요." << endl; // 잘못된 입력 처리
	}
}

int main()
{
	HighScore h; // HighScore 객체 생성
	h.run(); // 프로그램 실행
}