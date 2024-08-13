#include <stdio.h>

int main() {
    int X; // 영수증에 적힌 총 금액
    int N; // 물건 종류의 수
    int sum = 0;
    scanf("%d", &X);
    scanf("%d", &N);
    for (int i = 0; i < N; i++)
    {
        int a; // 물건의 가격
        int b; // 물건의 개수
        scanf("%d %d", &a, &b);
        sum += a*b;
    }
    if (X == sum)
        printf("Yes\n");
    else
        printf("No\n");
    return 0;
}