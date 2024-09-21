#include <iostream>
using namespace std;

int main()
{
    int *arr = new int [5];
    int sum=0;
    cout << "정수 5개 입력>> ";
    for(int i=0; i<5; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    cout << "평균 " << (double)sum/5.0;
    delete [] arr;
    return 0;
}