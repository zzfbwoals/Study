#include <iostream>
#include <string>
using namespace std;

bool bigger(int a, int b, int& big)
{
    if(a==b)
        return true;
    else
    {
        big = a>b?a:b;
        return false;
    }
}

int main()
{
    int a, b, big;
    cin >> a >> b;
    if(!bigger(a, b, big))
        cout << big << endl;
    else
        cout << "두 정수의 크기가 같습니다." << endl;
    return 0;
}