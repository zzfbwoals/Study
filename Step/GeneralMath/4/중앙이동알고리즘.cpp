#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    // 1+1  4   8   16  32 변의 길이=(2^N), 점의 개수=((2^N)+1)^2
    int N; // (1 <= N <= 15)
    cin >> N;
    int points = pow((pow(2, N) + 1), 2);
    cout << points << endl;
    return 0;
}