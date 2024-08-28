#include <iostream>

using namespace std;

int main()
{
    int N, sum = 0;
    cin >> N;
    int arr[100][100] = {0};
    for(int i=0; i<N; i++)
    {
        int x, y;
        cin >> x >> y;
        for(int j=x; j<x+10; j++)
        {
            for(int z=y; z<y+10; z++)
            {
                if(arr[j][z]==1) continue;
                arr[j][z] = 1;
                sum++;
            }
        }
    }
    cout << sum << endl;
    return 0;
}