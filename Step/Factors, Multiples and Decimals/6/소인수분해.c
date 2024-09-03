#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N); // (1 ≤ N ≤ 10,000,000)
    if(N==1)
        return 0;
    int div=2;
    while(div<=N)
    {
        // 2부터 N까지 나누기
        if(div<=N && N%div == 0)
        {
            N = N/div;
            printf("%d\n", div);
            continue;
        }
        div++;
    }

    return 0;
}