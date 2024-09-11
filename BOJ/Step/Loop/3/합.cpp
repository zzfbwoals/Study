#include <iostream>

using namespace std;

int main() {
    int num; // (1 ≤ n ≤ 10,000)
    int sum = 0;
    cin >> num;
    for (int i = 0; i < num; i++)
    {
        sum += i + 1;
    }
    cout << sum << endl;
    return 0;
}