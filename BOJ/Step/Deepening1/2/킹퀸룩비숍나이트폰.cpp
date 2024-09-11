#include <iostream>

using namespace std;

int main()
{
    int chess[6] = {1, 1, 2, 2, 2, 8};
    int input[6];
    cin >> input[0] >> input[1] >> input[2] >> input[3] >> input[4] >> input[5];
    for (int i=0; i<6; i++)
    {
        cout << chess[i] - input[i] << " ";
    }    
    return 0;
}