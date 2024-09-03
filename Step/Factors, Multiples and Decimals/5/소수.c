#include <stdio.h>

int isPrime(int num)
{
    if(num <= 1)
        return 0;
    for(int i = 2; i < num; i++)
    {
        if(num % i == 0)
            return 0;
    }
    return 1;
}

int main()
{
    int M, N;
    scanf("%d %d", &M, &N);
    int min = N, sum = 0;
    for(int i = M; i <= N; i++)
    {
        if(isPrime(i))
        {
            sum += i;
            if(i <= min)
                min = i;
        }
    }
    if(sum == 0)
        printf("-1\n");
    else
        printf("%d\n%d\n", sum, min);
    return 0;
}