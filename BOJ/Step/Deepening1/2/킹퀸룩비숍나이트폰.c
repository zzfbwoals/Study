#include <stdio.h>

int main()
{
    int chess[6] = {1, 1, 2, 2, 2, 8};
    int input[6];
    scanf("%d %d %d %d %d %d", &input[0], &input[1], &input[2], &input[3], &input[4], &input[5]);
    for (int i=0; i<6; i++)
    {
        printf("%d ", chess[i] - input[i]);
    }
    return 0;
}