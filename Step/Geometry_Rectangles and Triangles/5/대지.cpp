#include <iostream>
#include <limits.h>

using namespace std;

struct XY {
    int x;
    int y;
};

int main()
{
    // 값 입력
    int N;
    cin >> N;
    XY *xy = new XY[N];
    for(int i = 0; i < N; i++)
    {
        cin >> xy[i].x >> xy[i].y;
    }

    // xy 최소 최대 찾기
    int minX = INT_MAX, maxX = INT_MIN, minY = INT_MAX, maxY = INT_MIN; // 최소값은 정수형 최대값으로 초기화, 최대값은 정수형 최소값으로 초기화
    for(int i = 0; i < N; i++)
    {
        if(minX > xy[i].x)
            minX = xy[i].x;
        if(maxX < xy[i].x)
            maxX = xy[i].x;
        if(minY > xy[i].y)
            minY = xy[i].y;
        if(maxY < xy[i].y)
            maxY = xy[i].y;
    }

    int area = (maxX - minX) * (maxY - minY);
    cout << area << endl;

    delete[] xy;
    return 0;
}