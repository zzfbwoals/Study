#include <stdio.h>

int main() {
    int x1, y1, x2, y2, x3, y3;
    int x4, y4;

    // 세 점의 좌표 입력
    scanf("%d %d", &x1, &y1);
    scanf("%d %d", &x2, &y2);
    scanf("%d %d", &x3, &y3);

    // 네 번째 점의 x 좌표 계산
    if (x1 == x2) {
        x4 = x3;
    } else if (x1 == x3) {
        x4 = x2;
    } else {
        x4 = x1;
    }

    // 네 번째 점의 y 좌표 계산
    if (y1 == y2) {
        y4 = y3;
    } else if (y1 == y3) {
        y4 = y2;
    } else {
        y4 = y1;
    }

    // 네 번째 점의 좌표 출력
    printf("%d %d\n", x4, y4);

    return 0;
}