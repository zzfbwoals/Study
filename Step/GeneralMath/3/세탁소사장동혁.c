#include <stdio.h>
#include <stdlib.h>

int main()
{
    // 쿼터 0.25, 다임 0.10, 니켈 0.05, 페니 0.01
    int T; // 테스트 케이스의 개수
    scanf("%d", &T);
    int *arr = (int *)malloc(sizeof(int) * T);

    for(int i = 0; i < T; i++) {
        scanf("%d", &arr[i]);
    }

    for(int i = 0; i < T; i++)
    {
        int quarters = arr[i] / 25;
        int dimes = (arr[i] % 25) / 10;
        int nickels = (arr[i] % 25 % 10) / 5;
        int pennies = arr[i] % 25 % 10 % 5;
        
        printf("%d %d %d %d\n", quarters, dimes, nickels, pennies);
    }

    free(arr);
    return 0;
}