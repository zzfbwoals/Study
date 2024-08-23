#include <stdio.h>
#include <string.h>

int main()
{
    char S[101];
    int max = 0;
    while(max < 100 && gets(S))
    {
        printf("%s\n", S);
        max++;
    }
    return 0;
}