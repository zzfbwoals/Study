#include <iostream>

using namespace std;

int main()
{
    long n; // (1 ≤ n ≤ 500,000) 50만 * 50만은 너무 커서 long 자료형으로 선언
    cin >> n;
    cout << n*n << endl;
    cout << 2 << endl;
    return 0;
}
/*
MenOfPassion(A[], n) {
    sum <- 0;
    for i <- 1 to n
        for j <- 1 to n
            sum <- sum + A[i] × A[j]; # 코드1
    return sum;
}
-> O(n^2)
*/