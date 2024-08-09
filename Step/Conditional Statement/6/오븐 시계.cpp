#include <iostream>

using namespace std;

int main()
{
    int A, B, C; // (0 ≤ A ≤ 23), (0 ≤ B ≤ 59), (0 ≤ C ≤ 1,000)
    cin >> A >> B;
    cin >> C;
    B += C;  // 분에 C를 더함
    A += B / 60;  // 60분이 넘으면 시간에 반영
    B %= 60;  // 60분을 초과한 부분을 분으로 나머지 연산
    A %= 24;  // 시간이 24시를 넘으면 0부터 시작하도록
    cout << A << " " << B << endl;
    return 0;
}
