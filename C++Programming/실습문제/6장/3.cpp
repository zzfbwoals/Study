#include <iostream>
using namespace std;

int big(int x, int y, int max=100)
{
    int temp = x>y?x:y;
    return temp>max?max:temp;
}

int main()
{
    int x = big(3,5);
    int y = big(300, 60);
    int z = big(30, 60, 50);
    cout << x << ' ' << y << ' ' << z << endl;
    return 0;
}