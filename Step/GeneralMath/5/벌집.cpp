#include <iostream>

using namespace std;

int main()
{
    /*
    1=1
    2~7=2
    8~19=3
    20~37=4
    */
    int N, count=1, temp=1;
    cin >> N;
    if(N==1)
    {
        cout << 1 << endl;
        return 0;
    }
    while(temp<N)
    {
        temp += 6*count;
        count++;
    }
    cout << count << endl;
    return 0;
}