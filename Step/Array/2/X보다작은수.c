#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N, X;
    scanf("%d %d", &N, &X); // (1 ≤ N, X ≤ 10,000)
    int* arr = (int*)malloc(sizeof(int) * N); // 동적 배열 할당
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]); // 1보다 크거나 같고, 10,000보다 작거나 같은 정수
    }
    for (int i = 0; i < N; i++)
    {
        if (arr[i] < X)
            printf("%d ", arr[i]);
    }
    free(arr); // 동적 배열 해제
    return 0;
}