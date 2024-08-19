#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N, M;
    scanf("%d %d", &N, &M);
    int *arr = (int *)malloc(sizeof(int)*N);
    for (int i=0; i<N; i++)
    {
        arr[i] = i+1;
    }
    for (int x=0; x<M; x++)
    {
        int i, j;
        scanf("%d %d", &i, &j);
        for (int z=0; z<(j-i+1)/2; z++) // 배열 뒤집기
        {
            int temp = arr[i-1+z];
            arr[i-1+z] = arr[j-1-z];
            arr[j-1-z] = temp;
        }
    }
    for (int y=0; y<N; y++)
    {
        printf("%d ", arr[y]);
    }
    free(arr);
    return 0;
}