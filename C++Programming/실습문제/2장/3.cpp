/*
키보드로부터 두 개의 정수를 읽어 큰 수를 화면에 출력하라.
*/
#include <iostream>
using namespace std;

void run()
{
    cout << "두 수를 입력하라>>";
    int a, b;
    cin >> a >> b;
    cout << "큰 수 = " << (a>b?a:b);
}

int main()
{
    run();
    return 0;
}