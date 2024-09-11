#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char str[101];
    cin >> str;
    int str_len = strlen(str);
    for (int i = 0; i < str_len / 2; i++)
    {
        if (str[i] != str[str_len - 1 - i])
        {
            cout << "0" << endl;
            return 0;
        }
    }
    cout << "1" << endl;
    return 0;
}