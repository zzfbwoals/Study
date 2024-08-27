#include <stdio.h>
#include <stdlib.h>

int main()
{
    int row, col;
    scanf("%d %d", &row, &col);

    int **A = (int **)malloc(sizeof(int*) * row);
    int **B = (int **)malloc(sizeof(int*) * row);
    for(int i = 0; i < row; i++)
    {
        A[i] = (int*)malloc(sizeof(int) * col);
        B[i] = (int*)malloc(sizeof(int) * col);
    }

    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            scanf("%d", &B[i][j]);
        }
    }

    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            printf("%d ", A[i][j] + B[i][j]);
        }
        printf("\n");
    }

    for(int i = 0; i < row; i++)
    {
        free(A[i]);
        free(B[i]);
    }
    free(A);
    free(B);

    return 0;
}