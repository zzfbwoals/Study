#ifndef WORD_H
#define WORD_H

#include <iostream>
#include <string>
using namespace std;

// Word 클래스 정의
class Word {
    string kor; // 한국어 단어
    string eng; // 영어 단어
public:
    Word(string kor = "", string eng = ""); // 생성자
    void run(); // 영어 어휘 테스트 실행 함수
    void seed(); // 랜덤 시드 설정 함수
    string getEng(); // 영어 단어 반환 함수
    string getKor(); // 한국어 단어 반환 함수
};

#endif // !WORD_H