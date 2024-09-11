#include <iostream>
#include <iomanip>  // 소수점 자릿수를 설정하기 위해 필요합니다.

using namespace std;

int main()
{
    double a = 0;
    double b = 0;

    cin >> a;
    cin >> b;

    // 소수점 10자리까지 출력하도록 설정합니다.
    cout << fixed << setprecision(10); 
    cout << a/b << endl;

    return 0;
}