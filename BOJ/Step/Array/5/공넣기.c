#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N, M;
    scanf("%d %d", &N, &M);
    int *arr = (int *)calloc(N, sizeof(int)); // 동적 배열 할당 및 0으로 초기화
    if (arr==NULL)
    {
        fprintf(stderr, "메모리 할당 실패\n");
    }
    int i, j, k;
    for (int x=0; x<M; x++)
    {
        scanf("%d %d %d", &i, &j, &k);
        for (int y=i-1; y<j; y++)
        {
            arr[y] = k;
        }
    }
    for (int z=0; z<N; z++)
    {
        printf("%d ", arr[z]);
    }
    printf("\n");
    free(arr);
    return 0;
}