#include <iostream>

using namespace std;

int main()
{
    while(1)
    {
        int A, B;
        cin >> A >> B;
        if(A==0 && B==0)
            break;
        // 첫 번째 숫자가 두 번째 숫자의 약수(factor)
        if(B%A==0)
            cout << "factor\n";
        // 첫 번째 숫자가 두 번째 숫자의 배수(multiple)
        else if(A%B==0)
            cout << "multiple\n";
        // 첫 번째 숫자가 두 번째 숫자의 약수와 배수 모두 아니다(neither)
        else
            cout << "neither\n";
    }
    return 0;
}