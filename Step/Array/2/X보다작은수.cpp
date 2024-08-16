#include <iostream>

using namespace std;

int main()
{
    int N, X;
    cin >> N >> X; // (1 ≤ N, X ≤ 10,000)
    int* arr = new int[N]; // 동적 배열 할당
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i]; // 1보다 크거나 같고, 10,000보다 작거나 같은 정수
    }
    for (int i = 0; i < N; i++)
    {
        if (arr[i] < X)
            cout << arr[i] << ' ';
    }
    delete[] arr; // 동적 배열 해제
    return 0;
}