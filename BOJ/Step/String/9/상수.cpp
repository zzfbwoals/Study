#include <iostream>

using namespace std;

int main()
{
    char A[4], B[4];
    cin >> A >> B;
    for (int i=2; i>=0; i--)
    {
        if (A[i] > B[i])
        {
            cout << A[2] << A[1] << A[0] << endl;
            break;
        }
        else if (A[i] < B[i])
        {
            cout << B[2] << B[1] << B[0] << endl;
            break;
        }
    }
    return 0;
}