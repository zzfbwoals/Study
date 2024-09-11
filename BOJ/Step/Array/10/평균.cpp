#include <iostream>

using namespace std;

int main()
{
    int N, M=0;
    cin >> N; // N<=1000
    int *arr = new int[N];
    for (int i=0; i<N; i++)
    {
        cin >> arr[i];
        if (M < arr[i])
        {
            M = arr[i];
        }
    }
    float sum = 0.0f;
    for (int i=0; i<N; i++)
    {
        sum += (float)arr[i]/M*100;
    }
    cout << sum/N << endl;
    delete[] arr;
    return 0;
}