#include <iostream>
#include <string>

using namespace std;

int main()
{
    int B, N;
    cin >> B >> N;
    string strTemp = "";

    while (B >= N)
    {
        int temp = B % N;
        if (temp >= 0 && temp < 10)
            strTemp += char(temp + '0');
        else
            strTemp += char(temp + 55);
        B /= N;
    }
    if (B >= 0 && B < 10)
        strTemp += char(B + '0');
    else
        strTemp += char(B + 55);

    string str = "";
    int strTemp_len = strTemp.length();
    for (int i = strTemp_len - 1; i >= 0; i--)
    {
        str += strTemp[i];
    }

    cout << str << endl;
    return 0;
}