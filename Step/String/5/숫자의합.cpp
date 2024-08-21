#include <iostream>

using namespace std;

int main()
{
    int N, sum = 0;
    cin >> N;
    char *str = new char[N+1];
    cin >> str;
    for (int i=0; i<N; i++)
    {
        sum += str[i] - '0'; // (int)str[i] - 48
    }
    cout << sum;
    delete[] str;
    return 0;
}