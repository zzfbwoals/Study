#include <iostream>
using namespace std;

int factorial(int num)
{
    if(num==0)
        return 1;
    else
        return num*factorial(num-1);
}
/*
3 * 팩(2)
3 * 2 * 팩(1)
3 * 2 * 1 * 팩(0) if(num==0)을 만나서 재귀 종료
3 * 2 * 1 * 1
3 * 2 * 1
3 * 2
6
*/

int main()
{
    int N;
    cin >> N;
    cout << factorial(N) << endl;
    return 0;
}