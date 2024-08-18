#include <iostream>

using namespace std;

int main()
{
    int N, M; // (1 ≤ N ≤ 100), (1 ≤ M ≤ 100)
    cin >> N >> M;
    int *arr = new int[N](); // 동적 배열 할당 및 0으로 초기화
    int i, j, k;
    for (int x=0; x<M; x++)
    {
        cin >> i >> j >> k;
        for (int y=i-1; y<j; y++)
        {
            arr[y] = k;
        }
    }
    for (int z=0; z<N; z++)
    {
        cout << arr[z] << " ";
    }
    cout << endl;
    delete[] arr;
    return 0;
}