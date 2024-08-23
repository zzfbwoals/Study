#include <stdio.h>
#include <string.h>

int main()
{
    char str[101];
    scanf("%s", str);
    int str_len = strlen(str);
    for (int i = 0; i<str_len/2; i++)
    {
        if (str[i] != str[str_len-1-i])
        {
            printf("0\n");
            return 0;
        }
    }
    printf("1\n");
    return 0;
}