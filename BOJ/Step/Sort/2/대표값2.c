#include <stdio.h>
#include <stdlib.h>

// 10 40 30 60 30
// 10 30 40 60 30
// 10 30 30 60 40
// 10 30 30 40 60
void selectionSort(int arr[], int N) {
    for (int i = 0; i < N - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < N; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
}

int main()
{
    int *arr = (int*)malloc(sizeof(int)*5);
    int sum = 0;
    for(int i=0; i<5; i++)
    {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    selectionSort(arr, 5);
    int avg = sum / 5;
    int mid = arr[2];
    printf("%d\n%d\n", avg, mid);
    free(arr);
    return 0;
}