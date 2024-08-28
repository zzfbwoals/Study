#include <iostream>

using namespace std;

int main()
{
    char strArr[5][16] = {0}; // 배열을 0으로 초기화
    for(int i = 0; i < 5; i++)
    {
        cin >> strArr[i];
    }

    for(int i = 0; i < 15; i++) // 최대 열 길이 15
    {
        for(int j = 0; j < 5; j++)
        {
            if(strArr[j][i] != '\0')
                cout << strArr[j][i];
        }
    }
    return 0;
}