#include <iostream>

using namespace std;

int main()
{
    int N;
    cin >> N; // (1 ≤ N ≤ 10,000,000)
    if(N==1)
        return 0;
    int div=2;
    while(div<=N)
    {
        // 2부터 N까지 나누기
        if(div<=N && N%div == 0)
        {
            N = N/div;
            cout << div << endl;
            continue;
        }
        div++;
    }

    return 0;
}