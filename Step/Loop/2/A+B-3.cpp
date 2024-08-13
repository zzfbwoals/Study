#include <iostream>

using namespace std;

int main() {
    int A, B; //  (0 < A, B < 10)
    int T;
    cin >> T;
    for (int i = 0; i < T; i++) {
        cin >> A >> B;
        cout << A + B << endl;
    }
    return 0;
}