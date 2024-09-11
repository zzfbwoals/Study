#include <stdio.h>

int main()
{
    char str[101];
    scanf("%s", str);
    int count = 0;
    for (int i=0; str[i] != '\0'; i++)
    {
        count++;
    }
    printf("%d", count);
    return 0;
}