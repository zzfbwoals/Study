#include <iostream>
using namespace std;

int main()
{
    int N, count=0;
    cin >> N;
    //5x+3y=11
    int x = N/5;
    int y = 0;
    while(x>=0)
    {
        if((N-(5*x))%3==0)
        {
            y = (N-(5*x))/3;
            break;
        }
        x--;
    }

    cout << x+y << endl;
    return 0;
}