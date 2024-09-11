#include <iostream>

using namespace std;

int main() {
    // 입출력 시간 단축
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int T, A, B; // T는 최대 1,000,000, A와 B는 1 이상 1,000 이하
    cin >> T;
    for (int i = 0; i<T; i++) {
        cin >> A >> B;
        cout << A+B << '\n';
    }
    return 0;
}