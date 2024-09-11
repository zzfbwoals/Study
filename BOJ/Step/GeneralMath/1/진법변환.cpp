#include <iostream>
#include <cstring>
#include <cctype>
#include <cmath>

using namespace std;

int main()
{
    string B;
    int N, sum=0;
    cin >> B >> N;
    int B_len = B.length();
    for(int i=0; i<B_len; i++)
    {
        if(isdigit(B[i]))
        {
            sum += (B[i] - '0') * pow(N, B_len-1-i);
        }
        else if(isalpha(B[i]))
        {
            sum += ((int)B[i]-55) * pow(N, B_len-1-i);
        }
    }
    cout << sum << endl;
    return 0;
}