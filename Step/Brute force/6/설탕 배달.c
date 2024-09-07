#include <stdio.h>

int main()
{
    int N, count = 0;
    scanf("%d", &N);
    // 5x + 3y = N
    int x = N / 5;
    int y = 0;
    while (x >= 0)
    {
        if ((N - (5 * x)) % 3 == 0)
        {
            y = (N - (5 * x)) / 3;
            break;
        }
        x--;
    }

    printf("%d\n", x + y);
    return 0;
}