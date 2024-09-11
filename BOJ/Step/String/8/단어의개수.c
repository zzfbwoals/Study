#include <stdio.h>
#include <string.h>

int main()
{
    char str[1000001];
    gets(str);
    int count = 0;
    for (int i=0; str[i] != '\0'; i++)
    {
        if (str[i] == ' ')
            count++;
    }
    if (str[0] == ' ')
        count--;
    if (str[strlen(str)-1] == ' ')
        count--;
    printf("%d\n", count+1);
    return 0;
}