/*
<Enter> 키가 입력될 때까지 문자들을 읽고, 입력된 문자 'x'의 개수를 화면에 출력하라.
*/
#include <iostream>
#include <cstring>
using namespace std;

void run()
{
    cout << "문자들을 입력하라(100개 미만)." << endl;
    char str[100];
    int count = 0;
    cin.getline(str, 100, '\n');
    for(int i=0; i<strlen(str); i++)
    {
        if(str[i]=='x')
            count ++;
    }
    cout << "x의 개수는 " << count << endl;
}

int main()
{
    run();
    return 0;
}