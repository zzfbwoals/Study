#include <stdio.h>

int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if ( a==b && b==c && a==c ) // 같은 눈이 3개가 나오면 10,000원+(같은 눈)×1,000원의 상금을 받게 된다.
        printf("%d\n", 10000+a*1000);
    else if ( a!=b && b!=c && a!=c ) // 모두 다른 눈이 나오는 경우에는 (그 중 가장 큰 눈)×100원의 상금을 받게 된다.
    {
        if ( a>=b && a>=c)
            printf("%d\n", a*100);
        else if ( b>=a && b>=c )
            printf("%d\n", b*100);
        else if ( c>=b && c>=a )
            printf("%d\n", c*100);
    }
    else // 같은 눈이 2개만 나오는 경우에는 1,000원+(같은 눈)×100원의 상금을 받게 된다.
    {
        if ( a==b )
            printf("%d\n", 1000+a*100);
        else if ( b==c )
            printf("%d\n", 1000+b*100);
        else
            printf("%d\n", 1000+c*100);
    }

    return 0; 
}