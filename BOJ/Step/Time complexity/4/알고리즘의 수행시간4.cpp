#include <iostream>

using namespace std;

int main() {
    long n;
    cin >> n;
    
    // 코드1의 수행 횟수 계산
    long long count = (n * (n - 1)) / 2;
    cout << count << endl;
    
    // 최고차항의 차수 출력
    cout << 2 << endl;
    
    return 0;
}