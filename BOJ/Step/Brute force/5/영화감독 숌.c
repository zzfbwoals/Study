#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int N;
    scanf("%d", &N);
    int num=666, count=0;
    char buffer[100];
    while(1)
    {
        sprintf(buffer, "%d", num);
        if(strstr(buffer, "666") != NULL)
            count++;
        if(count==N)
        {
            printf("%d\n", num);
            break;
        }
        num++;
    }
    return 0;
}