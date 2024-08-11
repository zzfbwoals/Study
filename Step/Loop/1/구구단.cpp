#include <iostream>

using namespace std;

int main()
{
    int num; // N은 1보다 크거나 같고, 9보다 작거나 같다.
    cin >> num;
    for ( int i = 1; i < 10; i++)
    {
        cout << num << " * " << i << " = " << num * i << endl;
    }
    return 0;
}