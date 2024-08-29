#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>

int main()
{
    char B[100];
    int N, sum=0;
    scanf("%s %d", B, &N);
    int B_len = strlen(B);
    
    for(int i=0; i<B_len; i++)
    {
        if(isdigit(B[i]))
        {
            sum += (B[i] - '0') * pow(N, B_len-1-i);
        }
        else if(isalpha(B[i]))
        {
            sum += ((int)B[i]-55) * pow(N, B_len-1-i);
        }
    }
    printf("%d", sum);
    return 0;
}