#include <iostream>

using namespace std;

int main()
{
    int n;
    while (cin >> n && n != -1)
    {
        if (n == 1)
        {
            cout << "1 is NOT perfect.\n";
            continue;
        }

        int count = 0, sum = 0;
        int *arr = new int[n / 2]; // 약수의 최대 개수는 n/2

        for (int i = 1; i < n; i++)
        {
            if (n % i == 0)
            {
                arr[count] = i; // 약수를 저장
                sum += arr[count];
                count++;
            }
        }

        if (sum == n) // 완전수인 경우
        {
            cout << n << " = ";
            for (int i = 0; i < count - 1; i++)
            {
                cout << arr[i] << " + ";
            }
            cout << arr[count - 1] << endl;
        }
        else
        {
            cout << n << " is NOT perfect.\n";
        }

        delete[] arr; // 동적 배열 해제
    }
    return 0;
}