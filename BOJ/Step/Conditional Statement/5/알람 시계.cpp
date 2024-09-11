#include <iostream>

using namespace std;

int main()
{
    int H, M; // (0 ≤ H ≤ 23, 0 ≤ M ≤ 59)
    cin >> H >> M;
    if ( M>=45 )
        cout << H << " " << M-45 << endl;
    else if( H == 0 )
        cout << 23 << " " << M+60-45 << endl;
    else
        cout << H-1 << " " << M+60-45 << endl;
    return 0;
}