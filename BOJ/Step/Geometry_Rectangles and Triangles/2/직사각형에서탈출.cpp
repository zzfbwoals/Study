#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int x, y, w, h;
    cin >> x >> y >> w >> h;

    // 각 변까지의 거리 계산
    int distanceToLeft = x;
    int distanceToRight = w - x;
    int distanceToBottom = y;
    int distanceToTop = h - y;

    // 최솟값 계산
    int minDistance = min({distanceToLeft, distanceToRight, distanceToBottom, distanceToTop});

    // 결과 출력
    cout << minDistance << endl;

    return 0;
}