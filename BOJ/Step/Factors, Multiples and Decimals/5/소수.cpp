#include <iostream>

using namespace std;

bool isPrime(int num)
{
    if(num <=1)
        return false;
    for(int i=2; i<num; i++)
    {
        if(num%i==0)
            return false;
    }
    return true;
}

int main()
{
    int M, N;
    cin >> M >> N;
    int min=N, sum=0;
    for(int i=M; i<=N; i++)
    {
        if(isPrime(i))
        {
            sum += i;
            if(i<=min)
                min = i;
        }
    }
    if(sum==0)
        cout << "-1\n";
    else
        cout << sum << endl << min << endl;
    return 0;
}