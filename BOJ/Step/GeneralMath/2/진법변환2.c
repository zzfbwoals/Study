#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    int N, B;
    scanf("%d %d", &B, &N);
    char strTemp[100] = "";
    int i = 0;

    while (B >= N)
    {
        int temp = B % N;
        if (temp >= 0 && temp < 10)
            strTemp[i++] = temp + '0';
        else
            strTemp[i++] = temp + 55;
        B /= N;
    }
    if (B >= 0 && B < 10)
        strTemp[i++] = B + '0';
    else
        strTemp[i++] = B + 55;
    
    for (int j = i - 1; j >= 0; j--)
    {
        printf("%c", strTemp[j]);
    }
    return 0;
}