#include <stdio.h>

int main()
{
    int A, B;
    while (scanf("%d %d", &A, &B) != EOF) // EOF나 입력 오류가 발생하면
    {
        printf("%d\n", A + B);
    }
    return 0;
}