#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    // 최댓값을 찾고 나머지 두 변의 합보다 1작게 해서 세 변 더하기
    int max=a;
    if(max<b)
        max=b;
    if(max<c)
        max=c;
    // 삼각형 만들기 가능
    if(max<a+b+c-max)
        cout << a+b+c << endl;
    // 삼각형 만들기 불가능
    else
        cout << (a+b+c-max) + (a+b+c-max-1) << endl;

    return 0;
}