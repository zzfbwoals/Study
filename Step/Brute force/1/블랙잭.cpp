#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;
    int *arr = new int[N];

    for(int i=0; i<N; i++)
    {
        int num;
        cin >> num;
        arr[i] = num;
    }

    // a=arr[0] b=arr[1] c=arr[2]
    // a=arr[0] b=arr[1] c=arr[3]
    // a=arr[0] b=arr[1] c=arr[4]
    // a=arr[0] b=arr[2] c=arr[3]
    // a=arr[0] b=arr[2] c=arr[4]
    int sum=0;
    for(int i=0; i<N; i++)
    {
        for(int j=i+1; j<N; j++)
        {
            for(int l=j+1; l<N; l++)
            {
                if(arr[i]+arr[j]+arr[l]<=M && arr[i]+arr[j]+arr[l]>sum)
                    sum = arr[i]+arr[j]+arr[l];
            }
        }
    }
    cout << sum << endl;
    
    delete[] arr;
    return 0;
}