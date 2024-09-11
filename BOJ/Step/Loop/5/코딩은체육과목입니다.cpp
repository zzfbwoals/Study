#include <iostream>

using namespace std;

int main() {
    int n; // 4<=n<=100
    cin >> n;
    for (int i = 0; i<(n/4); i++)
        cout << "long ";
    cout << "int\n";
    return 0;
}