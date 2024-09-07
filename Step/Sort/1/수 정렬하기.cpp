#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int N;
    cin >> N;
    int *arr = new int[N];
    for(int i=0; i<N; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr+N);
        // 정렬된 배열 출력
    for(int i = 0; i < N; i++)
    {
        cout << arr[i] << endl;
    }
    return 0;
}