#include <string>
#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;

int main()
{
    srand((unsigned)time(0));
    cout << "아래에 한 줄을 입력하세요.(exit를 입력하면 종료합니다)" << endl;
    while(true)
    {
        cout << ">>";
        string text;
        getline(cin, text);
        if(text == "exit")
            break;
        int index = rand() % text.length();
        int randomChar;
        if (rand() % 2 == 0) {
            randomChar = rand() % 26 + 65; // A부터 Z까지의 랜덤한 대문자
        } else {
            randomChar = rand() % 26 + 97; // a부터 z까지의 랜덤한 소문자
        }
        text[index] = randomChar;
        cout << text << endl;
    }
    return 0;
}