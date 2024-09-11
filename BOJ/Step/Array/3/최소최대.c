#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N, min, max;
    scanf("%d", &N);
    int *arr = (int *)malloc(sizeof(int) * N);
    for (int i=0; i<N; i++)
    {
        scanf("%d", &arr[i]);
    }
    arr[0] = min = max = arr[0];
    for(int i=1; i<N; i++)
    {
        if (arr[i]<min)
            min = arr[i];
        if (arr[i]>max)
            max = arr[i];
    }
    printf("%d %d\n", min, max);
    free(arr);
    return 0;
}
