#include <iostream>

using namespace std;

int main()
{
    char str[101];
    cin >> str;
    int count = 0;
    for (int i=0; str[i] != '\0'; i++)
    {
        count++;
    }
    cout << count;
    return 0;
}