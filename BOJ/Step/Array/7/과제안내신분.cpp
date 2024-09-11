#include <iostream>

using namespace std;

int main()
{
    int arr[30] = {0};
    for (int i=0; i<28; i++)
    {
        int temp;
        cin >> temp;
        arr[temp-1] = 1;
    }
    for (int j=0; j<30; j++)
    {
        if (arr[j] == 0)
        {
            cout << j+1 << endl;
        }
    }
    return 0;
}