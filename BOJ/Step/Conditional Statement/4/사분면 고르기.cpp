#include <iostream>

using namespace std;

int main()
{
    int x, y; //  (−1000 ≤ x ≤ 1000; x ≠ 0),  (−1000 ≤ y ≤ 1000; y ≠ 0)
    cin >> x;
    cin >> y;
    if ( x>0 && y>0 )
        cout << "1\n";
    else if ( x<0 && y>0 )
        cout << "2\n";
    else if ( x<0 && y<0 )
        cout << "3\n";
    else
        cout << "4\n";
    return 0;
}