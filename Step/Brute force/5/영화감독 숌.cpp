#include <iostream>
#include <string>
using namespace std;

int main()
{
    int N;
    cin >> N;
    int num=666, count=0;
    while(1)
    {
        if(to_string(num).find("666") != string::npos)
            count++;
        if(count==N)
        {
            cout << num << endl;
            break;
        }
        num++;
    }
    return 0;
}