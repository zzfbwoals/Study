#include <stdio.h>

int main()
{
    int N, M;
    scanf("%d %d", &N, &M);
    int *arr = (int*)malloc(N * sizeof(int));

    for(int i = 0; i < N; i++)
    {
        int num;
        scanf("%d", &num);
        arr[i] = num;
    }

    int sum = 0;
    for(int i = 0; i < N; i++)
    {
        for(int j = i + 1; j < N; j++)
        {
            for(int l = j + 1; l < N; l++)
            {
                if(arr[i] + arr[j] + arr[l] <= M && arr[i] + arr[j] + arr[l] > sum)
                    sum = arr[i] + arr[j] + arr[l];
            }
        }
    }
    printf("%d\n", sum);

    free(arr);
    return 0;
}