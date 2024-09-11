#include <iostream>

using namespace std;

int main() {
    int X; // 영수증에 적힌 총 금액
    int N; // 물건 종류의 수
    int sum = 0;
    cin >> X;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        int a; // 물건의 가격
        int b; // 물건의 개수
        cin >> a >> b;
        sum += a*b;
    }
    if (X == sum)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}