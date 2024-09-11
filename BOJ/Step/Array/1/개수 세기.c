#include <stdio.h>

int main()
{
    int array[200] = {0};
    int N, v;
    scanf("%d", &N);
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &array[i]);
    }
    scanf("%d", &v);
    int count = 0;
    for (int i = 0; i < N; i++)
    {
        if (array[i] == v)
            count++;
    }
    printf("%d\n", count);
    return 0;
}