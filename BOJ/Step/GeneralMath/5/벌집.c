#include <stdio.h>

int main()
{
    /*
    1=1
    2~7=2
    8~19=3
    20~37=4
    */
    int N, count=1, temp=1;
    scanf("%d", &N);
    if(N==1)
    {
        printf("1\n");
        return 0;
    }
    while(temp<N)
    {
        temp += 6*count;
        count++;
    }
    printf("%d\n", count);
    return 0;
}