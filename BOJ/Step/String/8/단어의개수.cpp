#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char str[1000001];
    cin.getline(str, 1000001);
    int count = 0;
    for (int i=0; str[i] != '\0'; i++)
    {
        if (str[i] == ' ')
            count++;
    }

    // 문자열은 공백으로 시작하거나 끝날 수 있다
    if (str[0] == ' ')
        count--;
    if (str[strlen(str)-1] == ' ')
        count--;
    cout << count+1 << endl;
    return 0;
}