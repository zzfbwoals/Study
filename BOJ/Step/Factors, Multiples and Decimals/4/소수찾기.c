#include <stdio.h>
#include <stdlib.h>

int isPrime(int num){
    if(num <=1) 
        return 0;
    for(int i=2; i<=num; i++)
    {
        if(num%i==0 && i!=num) 
            return 0;
    }
    return 1;
}

int main()
{
    int N, count = 0;
    scanf("%d", &N);
    int *arr = (int*)malloc(sizeof(int)*N);

    for(int i=0; i<N; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(int i=0; i<N; i++)
    {
        if(isPrime(arr[i]))
        {
            count++;
        }
    }

    printf("%d\n", count);
    free(arr);
    return 0;
}