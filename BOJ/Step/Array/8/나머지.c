#include <stdio.h>

int main()
{
    int arr[10] = {0};
    int num; // 0 ≤ num ≤ 1000
    for (int i=0; i<10; i++)
    {
        scanf("%d", &num);
        arr[i] = num % 42;
    }
    int count = 0;
    for (int j=0; j<10; j++)
    {
        int temp  = 0;
        for (int k=j+1; k<10; k++)
        {
            if (arr[j]==arr[k])
            {
                temp ++;
            }
        }
        if (temp == 0)
        {
            count ++;
        }
    }
    printf("%d\n", count);
    return 0;
}