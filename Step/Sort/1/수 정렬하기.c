#include <stdio.h>
#include <stdlib.h>

// 선택정렬
    // 3 4 2 1 5
    // 1 4 2 3 5
    // 1 2 4 3 5
    // 1 2 3 4 5
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

// 삽입정렬
    // 3 4 2 1 5
    // 2 3 4 1 5
    // 1 2 3 4 5
    // 1 2 3 4 5
    // 1 2 3 4 5
void insertionSort(int arr[], int N) {
    for (int i = 1; i < N; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

// 버블정렬
    // 3 2 4 1 5
    // 3 2 1 4 5 
    // 2 3 1 4 5
    // 2 1 3 4 5
    // 1 2 3 4 5
void bubbleSort(int arr[], int N) {
    for (int i = 0; i < N - 1; i++) {
        for (int j = 0; j < N - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main()
{
    int N;
    scanf("%d", &N);
    int *arr = (int*)malloc(sizeof(int)*N);
    for(int i=0; i<N; i++)
    {
        scanf("%d", &arr[i]);
    }

    selectionSort(arr, N);
    
    for(int i=0; i<N; i++)
    {
        printf("%d\n", arr[i]);
    }

    return 0;
}

/*
특성            선택정렬 (Selection Sort)    삽입정렬 (Insertion Sort)    버블정렬 (Bubble Sort)
-------------------------------------------------------------------------------------------
시간 복잡도     O(N^2)                      O(N) ~ O(N^2)               O(N^2)
공간 복잡도     O(1)                        O(1)                        O(1)
안정성          불안정                       안정                         안정
효율성          비교 횟수가 많아 비효율적     작은 배열에 대해 효율적      비교 횟수가 많아 비효율적
동작 방식       가장 작은 요소를 선택        현재 요소를 적절한 위치에 삽입 인접한 요소를 비교하여 교환
*/