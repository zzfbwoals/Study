#include <iostream>

using namespace std;

int main()
{
    int A, B, C; // (0 ≤ A ≤ 23), (0 ≤ B ≤ 59), (0 ≤ C ≤ 1,000)
    cin >> A >> B;
    cin >> C;
    if ( B+C < 60 )
        cout << A << " " << B+C << endl;
    else if ( B+C >= 60 && B+C < 120 )
    {
        if ( A+1 == 24 )
            cout << 0 << " " << B+C-60 << endl;
        else
            cout << A+1 << " " << B+C-60 << endl;
    }
    else if ( B+C >= 60 && B+C >= 120 )
    {
        if ( A+((B+C)/60) == 24 )
            cout << 0 << " " << (B+C)%60 << endl;
        else
            cout << A+((B+C)/60) << " " << (B+C)%60 << endl;
    }
    else
        cout << 0 << " " << B+C-60 << endl;
    return 0;
}