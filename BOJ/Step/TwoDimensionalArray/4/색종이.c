#include <stdio.h>

int main()
{
    int N, sum=0;
    scanf("%d", &N);
    int arr[100][100]={0};
    for(int i=0; i<N; i++)
    {
        int x, y;
        scanf("%d %d", &x, &y);
        for(int j=x; j<x+10; j++)
        {
            for(int z=y; z<y+10; z++)
            {
                if(arr[j][z]==1) continue;
                arr[j][z]=1;
                sum++;
            }
        }
    }
    printf("%d\n", sum);
    return 0;
}