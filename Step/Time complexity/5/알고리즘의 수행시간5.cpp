#include <iostream>

using namespace std;

int main()
{
    long n;
    cin >> n;
    long long count = n*n*n;
    cout << count << endl;
    cout << 3 << endl;
    return 0;
}
/*
MenOfPassion(A[], n) {
    sum <- 0;
    for i <- 1 to n
        for j <- 1 to n
            for k <- 1 to n
                sum <- sum + A[i] × A[j] × A[k]; # 코드1
    return sum;
}
-> O(n^3)
*/