#include <iostream>

using namespace std;

int main()
{
    int N, M; // (1 ≤ N ≤ 100), (1 ≤ M ≤ 100)
    cin >> N >> M;
    int *arr = new int[N];
    for (int x=0; x<N; x++)
    {
        arr[x] = x+1;
    }
    int i, j;
    for (int y=0; y<M; y++)
    {
        cin >> i >> j;
        int temp = arr[i-1];
        arr[i-1] = arr[j-1];
        arr[j-1] = temp;
    }
    for (int k=0; k<N; k++)
    {
        cout << arr[k] << " ";
    }
    delete[] arr;
    return 0;
}