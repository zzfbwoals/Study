#include <stdio.h>

int main()
{
    int A, B, C;
    scanf("%d %d", &A, &B);
    scanf("%d", &C);
    B+=C;
    A+=B/60;
    B%=60;
    A%=24;
    printf("%d %d\n", A, B);
    return 0;
}