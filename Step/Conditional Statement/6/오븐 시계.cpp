#include <iostream>

using namespace std;

int main()
{
    int A, B, C; // (0 ≤ A ≤ 23), (0 ≤ B ≤ 59), (0 ≤ C ≤ 1,000)
    cin >> A >> B;
    cin >> C;
    if ( B+C < 60 ) // B+C가 60분 미만인 경우
        cout << A << " " << B+C << endl;
    else if ( B+C >= 60 ) // B+C가 60분 이상인 경우
    {
        if ( A+((B+C)/60) == 24 ) // A가 24시인 경우
            cout << 0 << " " << (B+C)%60 << endl;
        else // A가 24시가 아닌 경우
            cout << A+((B+C)/60) << " " << (B+C)%60 << endl;
    }
    return 0;
}