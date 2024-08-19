#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N, M;
    scanf("%d %d", &N, &M);
    int *arr = (int *)malloc(sizeof(int) * N);
    for (int x=0; x<N; x++)
    {
        arr[x] = x+1;
    }
    int i, j;
    for (int y=0; y<M; y++)
    {
        scanf("%d %d", &i, &j);
        int temp = arr[i-1];
        arr[i-1] = arr[j-1];
        arr[j-1] = temp;
    }
    for (int k=0; k<N; k++)
    {
        printf("%d ", arr[k]);
    }
    free(arr);
    return 0;
}