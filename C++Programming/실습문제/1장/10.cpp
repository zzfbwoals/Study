/*
문자열을 하나 입력받고 문자열의 부분 문자열을 다음과 같이 출력하는 프로그램을 작성하라.
*/
#include <iostream>
#include <cstring> // strlen 함수를 사용하기 위해 추가
#include <string>
using namespace std;

void run()
{
    char str[100];
    cout << "문자열 입력>>";
    cin.getline(str, 100); // 공백을 포함한 문자열 입력받기
    for(int i=0; i<strlen(str); i++)
    {
        for(int j=0; j<=i; j++) // j<i+1 대신 j<=i 사용
            cout << str[j];
        cout << endl;
    }
}

int main()
{
    run();
    return 0;
}