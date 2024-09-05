#include <iostream>

using namespace std;

int main() {
    long n;
    cin >> n;
    
    // 코드1의 수행 횟수 계산
    long long count = (n * (n - 1) * (n - 2)) / 6;
    cout << count << endl;
    
    // 최고차항의 차수 출력
    cout << 3 << endl;
    
    return 0;
}
/*
MenOfPassion(A[], n) {
    sum <- 0;
    for i <- 1 to n - 2
        for j <- i + 1 to n - 1
            for k <- j + 1 to n
                sum <- sum + A[i] × A[j] × A[k]; # 코드1
    return sum;
}
-> O(n^3)
*/