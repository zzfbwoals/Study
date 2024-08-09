#include <iostream>

using namespace std;

int main()
{
    int year; // 1 이상 4000 이하
    cin >> year;
    if ( ((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0) )
        cout << "1\n";
    else
        cout << "0\n";
    return 0;
}