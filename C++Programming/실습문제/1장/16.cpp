/*
영문 텍스트를 입력받아 알파벳 히스토그램을 그리는 프로그램을 작성하라.
대문자는 모두 소문자로 집계하며, 텍스트 입력의 끝은 ';' 문자로 한다.
*/
#include <iostream>
#include <string>
#include <cstring>
using namespace std;

void run()
{
    cout << "영문 텍스트를 입력하세요. 히스토그램을 그립니다." << endl;
    cout << "텍스트의 끝은 ; 입니다. 10000개까지 가능합니다." << endl;
    char text[10000];
    cin.getline(text, 10000, ';');

    // 알파벳 개수 계산
    int count=0;
    int alpha[26] = {0};
    for(int i=0; i<strlen(text); i++)
    {
        if(isalpha(text[i]))
        {
            count++;
            alpha[tolower(text[i])-'a']++;
        }
    }

    // 다이어그램 출력
    cout << "총 알파벳 수 " << count << endl << endl;
    for(int i=0; i<26; i++)
    {
        cout << (char)(i + 'a') << " (" << alpha[i] << ")\t: ";
        for(int j=0; j<alpha[i]; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    
}

int main()
{
    run();
    return 0;
}