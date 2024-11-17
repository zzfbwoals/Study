#include "Word.h"
#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
#include <vector>
using namespace std;

// 10개의 Word 객체 배열 초기화
Word w[10] = { Word("인간", "human"), Word("아기", "baby"), Word("사회", "society"),
            Word("사진", "picture"), Word("감정", "emotion"), Word("곰", "bear"),
            Word("그림", "painting"), Word("거래", "trade"), Word("인형", "doll"),
            Word("애인", "lover") };

// Word 클래스의 생성자
Word::Word(string kor, string eng) {
    this->kor = kor;
    this->eng = eng;
    if (kor == "" && eng == "") { // 기본 생성자일 때만 벡터 초기화
        for (int i = 0; i < 10; i++)
            v.push_back(w[i]); // 크기가 10인 Word 배열 삽입
    }
}

// 랜덤 시드 설정 함수
void Word::seed() {
    srand((unsigned)time(0));
}

// 영어 단어 반환 함수
string Word::getEng() {
    return eng;
}

// 한국어 단어 반환 함수
string Word::getKor() {
    return kor;
}

void Word::test() {
    cout << "영어 어휘 테스트를 시작합니다. 1~4 외 다른 입력시 종료합니다." << endl;
    while (true) {
        Word answer[4]; // 4지선다 배열
        int index = rand() % 4; // 정답 인덱스 위치
        int n = rand() % v.size(); // 벡터 크기만큼 랜덤 인덱스
        answer[index] = v[n]; // 4개의 선지 중 하나에 정답 할당
        cout << answer[index].getEng() << "?" << endl; // 영어 단어 출력

        // 4지선다 랜덤 값 할당
        for (int i = 0; i < 4; i++) {
            if (answer[i].getEng() == "" && answer[i].getKor() == "") {
                do {
                    n = rand() % v.size();
                } while (answer[index].getEng() == v[n].getEng()); // 중복 방지
                answer[i] = v[n];
            }
        }

        // 4지선다 출력
        for (int i = 0; i < 4; i++)
            cout << "(" << i + 1 << ") " << answer[i].getKor() << " ";
        cout << ":>";

        int cmd;
        cin >> cmd; // 사용자 입력 받기
        if (cmd < 1 || cmd > 4)
            break; // 1~4 외 다른 입력시 종료
        else if (answer[index].getKor() == answer[cmd - 1].getKor())
            cout << "Excellent !!" << endl; // 정답
        else
            cout << "No. !!" << endl; // 오답
    }
    cout << endl;
}

void Word::insert() {
    cout << "영어 단어에 exit을 입력하면 입력 끝" << endl;
    while (true)
    {
        string eng, kor;
        cout << "영어 >>";
        cin >> eng;
        if (eng == "exit") break;
        cout << "한글 >>";
        cin >> kor;
        v.push_back(Word(kor, eng));
    }
    cout << endl;
}

// 영어 어휘 테스트 실행 함수
void Word::run() {
    seed(); // 랜덤 시드 설정
    cout << "***** 영어 어휘 테스트를 시작합니다. *****" << endl;
    while (true)
    {
        cout << "어휘 삽입: 1, 어휘 테스트: 2, 프로그램 종료: 그외키 >> ";
        int cmd;
        cin >> cmd;
        if (cmd == 1) insert(); // 어휘 삽입 시작
        else if (cmd == 2) test(); // 어휘 테스트 시작
        else break; // 프로그램 종료
    }
}