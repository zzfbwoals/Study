#include <iostream>

using namespace std;

int main()
{
    int arr[9];
    int size = sizeof(arr)/sizeof(arr[0]);
    int max = 0, count = 0;
    for (int i=0; i<size; i++)
    {
        cin >> arr[i];
    }
    for (int i=0; i<size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
            count = i+1;
        }
    }
    cout << max << endl << count << endl;
    return 0;
}