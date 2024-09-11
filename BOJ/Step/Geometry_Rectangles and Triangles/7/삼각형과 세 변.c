#include <stdio.h>

int main()
{
    while(1)
    {
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);
        if(a==0 && b==0 && c==0)
            break;
        int max = a;
        if(max < b)
            max = b;
        if(max < c)
            max = c;
        // Equilateral : 세 변의 길이가 모두 같은 경우
        if(max >= (a+b+c-max))
            printf("Invalid\n");
        // Isosceles : 두 변의 길이만 같은 경우
        else if((a==b && b!=c && a!=c) || (b==c && a!=c && a!=b) || (a==c && b!=c && a!=b))
            printf("Isosceles\n");
        // Scalene : 세 변의 길이가 모두 다른 경우
        else if(a!=b && b!=c && a!=c)
            printf("Scalene\n");
        // 주어진 세 변의 길이가 삼각형의 조건을 만족하지 못하는 경우에는 "Invalid"
        else if(a==b && b==c && a==c)
            printf("Equilateral\n");
    }
    return 0;
}