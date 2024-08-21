#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    int T; // (1 ≤ T ≤ 10)
    char str[1000];
    cin >> T;
    for (int i=0; i<T; i++)
    {
        cin >> str;
        cout << str[0] << str[strlen(str)-1] << endl;
    }
    return 0;
}