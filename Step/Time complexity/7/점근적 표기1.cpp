#include <iostream>

using namespace std;

int main()
{
    int a1, a0, c, n0;
    cin >> a1 >> a0;
    cin >> c;
    cin >> n0;

    // n0부터 시작하여 f(n) <= c * g(n)인지 확인
    bool isBigO = true;
    for (int n = n0; n <= 100; ++n) {
        int fn = (a1 * n) + a0;
        int gn = c * n;
        if (fn > gn) {
            isBigO = false;
            break;
        }
    }

    if (isBigO)
        cout << 1 << endl;
    else
        cout << 0 << endl;

    return 0;
}