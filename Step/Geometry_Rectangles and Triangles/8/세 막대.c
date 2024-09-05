#include <stdio.h>

int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    // 최댓값을 찾고 나머지 두 변의 합보다 1작게 해서 세 변 더하기
    int max = a;
    if (max < b)
        max = b;
    if (max < c)
        max = c;
    // 삼각형 만들기 가능
    if (max < a + b + c - max)
        printf("%d\n", a + b + c);
    // 삼각형 만들기 불가능
    else
        printf("%d\n", (a + b + c - max) + (a + b + c - max - 1));

    return 0;
}