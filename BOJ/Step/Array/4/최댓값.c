#include <stdio.h>

int main()
{
    int arr[9];
    int size = sizeof(arr)/sizeof(arr[0]);
    int max = 0, count = 0;
    for (int i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i=0; i<size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
            count = i+1;
        }
    }
    printf("%d\n%d\n", max, count);
    return 0;
}