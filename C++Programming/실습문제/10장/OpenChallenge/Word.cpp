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

// 영어 어휘 테스트 실행 함수
void Word::run() {
    seed(); // 랜덤 시드 설정
    vector<Word> v;
    for (int i = 0; i < 10; i++)
        v.push_back(w[i]); // 크기가 10인 Word 배열 삽입

    cout << "영어 어휘 테스트를 시작합니다. 1~4 외 다른 입력시 종료합니다." << endl;
    while (true) {
        Word answer[4]; // 4지선다 배열
        int index = rand() % 4; // 정답 인덱스 위치
        int n = rand() % 10; // 0부터 9까지 랜덤 인덱스
        answer[index] = v[n]; // 4개의 선지 중 하나에 정답 할당
        cout << answer[index].getEng() << "?" << endl; // 영어 단어 출력

        // 4지선다 랜덤 값 할당
        for (int i = 0; i < 4; i++) {
            if (answer[i].getEng() == "" && answer[i].getKor() == "") {
                do {
                    n = rand() % 10;
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
}