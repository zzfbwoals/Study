#include <stdio.h>

int main() {
    int T, A, B; // T는 최대 1,000,000, A와 B는 1 이상 1,000 이하
    scanf("%d", &T);
    for (int i = 0; i < T; i++) {
        scanf("%d %d", &A, &B);
        printf("%d\n", A + B);
    }
    return 0;
}