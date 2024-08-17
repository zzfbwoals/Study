#include <iostream>

using namespace std;

int main()
{
    int N, min, max; // (1 ≤ N ≤ 1,000,000)
    cin >> N; // N개의 정수
    int *arr = new int[N]; // 동적 배열 할당
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i]; // -1,000,000보다 크거나 같고, 1,000,000보다 작거나 같은 정수
    }

    arr[0] = min = max = arr[0];
    /*이 코드는 오른쪽에서 왼쪽으로 평가됩니다. 따라서 arr[0]의 값이 먼저 max에 할당되고, 그 다음에 min에 할당되며, 마지막으로 arr[0]에 다시 할당됩니다. 결과적으로 arr[0], min, max는 모두 동일한 값을 가지게 됩니다.*/

    for (int i = 1; i < N; i++)
    {
        if (arr[i] < min)
            min = arr[i];
        if (arr[i] > max)
            max = arr[i];
    }
    cout << min << ' ' << max << '\n';
    delete[] arr; // 동적 배열 해제
    return 0;
}