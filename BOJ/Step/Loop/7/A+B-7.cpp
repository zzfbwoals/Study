#include <iostream>

using namespace std;    

int main() {
    int T, A, B; // (0 < A, B < 10)
    cin >> T;
    for (int i = 0; i < T; i++) {
        cin >> A >> B;
        cout << "Case #" << i+1 << ": " << A + B << '\n';
    }
    return 0;
}