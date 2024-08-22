#include <iostream>

using namespace std;

int main()
{
    // 숫자1은 2초 2는 3초 3은 4초 4는 5초 5는 6초 6은 7초 7은 8초 8은 9초 9는 10초 0은 11초
    char str[16];
    cin >> str;
    int time = 0;
    for (int i=0; str[i] != '\0'; i++)
    {
        if (str[i] == '1')
            time += 2;
        else if (str[i] == 'A' || str[i] == 'B' || str[i] == 'C')
            time += 3;
        else if (str[i] == 'D' || str[i] == 'E' || str[i] == 'F')
            time += 4;
        else if (str[i] == 'G' || str[i] == 'H' || str[i] == 'I')
            time += 5;
        else if (str[i] == 'J' || str[i] == 'K' || str[i] == 'L')
            time += 6;
        else if (str[i] == 'M' || str[i] == 'N' || str[i] == 'O')
            time += 7;
        else if (str[i] == 'P' || str[i] == 'Q' || str[i] == 'R' || str[i] == 'S')
            time += 8;
        else if (str[i] == 'T' || str[i] == 'U' || str[i] == 'V')
            time += 9;
        else if (str[i] == 'W' || str[i] == 'X' || str[i] == 'Y' || str[i] == 'Z')
            time += 10;
    }
    cout << time << endl;
    return 0;
}