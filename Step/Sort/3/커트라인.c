#include <stdio.h>
#include <stdlib.h>

void bubbleSort(int arr[], int N)
{
    for(int i = 0; i < N - 1; i++)
    {
        for(int j = 0; j < N - 1 - i; j++)
        {
            if(arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main()
{
    int N, k;
    scanf("%d %d", &N, &k);

    // 메모리 할당 및 할당 실패 확인
    int *x = (int*)malloc(sizeof(int) * N);
    if (x == NULL) {
        fprintf(stderr, "메모리 할당 실패\n");
        return 1;
    }

    for(int i = 0; i < N; i++)
    {
        scanf("%d", &x[i]);
    }

    // 버블 정렬 함수 호출
    bubbleSort(x, N);

    printf("%d\n", x[N-k]);

    // 동적 메모리 해제
    free(x);

    return 0;
}