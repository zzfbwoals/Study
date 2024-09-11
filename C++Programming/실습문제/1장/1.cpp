/*
cout과 << 연산자를 이용하여, 1에서 100까지 정수를 다음과 같이 한 줄에 10개씩 출력하라.
각 정수는 탭으로 분리하여 출력하라.
*/
#include <iostream>
using namespace std;

int main()
{
    int num = 1;
    for(int i=0; i<10; i++)
    {
        for(int j=0; j<10; j++)
        {
            cout << num << '\t';
            num ++;
        }
        cout << endl;
    }
    return 0;
}