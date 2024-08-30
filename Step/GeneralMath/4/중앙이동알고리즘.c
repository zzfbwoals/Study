#include <stdio.h>
#include <math.h>

int main()
{
    int N;
    scanf("%d", &N);
    int points = pow((pow(2, N) + 1), 2);
    printf("%d\n", points);
    return 0;
}