#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N, M=0;
    scanf("%d", &N);
    int *arr = (int *)malloc(sizeof(int)*N);
    for (int i=0; i<N; i++)
    {
        scanf("%d", &arr[i]);
        if (M < arr[i])
        {
            M = arr[i];
        }
    }
    float sum = 0.0f;
    for (int i=0; i<N; i++)
    {
        sum += (float)arr[i]/M*100;
    }
    printf("%f\n", sum/N);
    free(arr);
    return 0;
}