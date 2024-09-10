#include <stdio.h>
#include <stdlib.h>

void selectionSort(int arr[], int N)
{
    for(int i = 0; i < N - 1; i++)
    {
        int minIndex = i;
        for(int j=i + 1; j<N; j++)
        {
            if(arr[j]<arr[minIndex])
                minIndex = j;
        }
        int temp = arr[minIndex];
        arr[minIndex] = arr[i];
        arr[i] = temp;
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

    // 선택 정렬 함수 호출
    selectionSort(x, N);

    printf("%d\n", x[N-k]);

    // 동적 메모리 해제
    free(x);

    return 0;
}