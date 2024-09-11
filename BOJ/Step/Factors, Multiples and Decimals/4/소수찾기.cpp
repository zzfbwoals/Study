#include <iostream>

using namespace std;

bool isPrime(int num) {
    if (num <= 1) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

int main() {
    int N, count = 0;
    cin >> N;
    int *arr = new int[N];

    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < N; i++) {
        if (isPrime(arr[i])) {
            count++;
        }
    }

    cout << count << endl;
    delete[] arr;
    return 0;
}