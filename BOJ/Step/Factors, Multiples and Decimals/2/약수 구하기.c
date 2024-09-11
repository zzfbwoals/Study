#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N, K;
    scanf("%d %d", &N, &K);
    
    // 약수의 개수와 약수 저장
    int count = 0;
    int *arr = (int*)malloc(sizeof(int)*N); // 최대 N개의 약수를 가질 수 있음

    for(int i = 1; i <= N; i++)
    {
        if(N % i == 0)
        {
            arr[count] = i;
            count++;
        }
    }

    // K번째로 작은 약수
    if(K <= count)
    {
        printf("%d\n", arr[K - 1]); // K번째 작은 약수는 K-1 인덱스에 있음
    }
    else
    {
        printf("0\n"); // K가 약수의 개수보다 큰 경우
    }

    free(arr);
    return 0;
}