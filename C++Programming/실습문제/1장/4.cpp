/*
소수점을 가지는 5개의 실수를 입력 받아 제일 큰 수를 화면에 출력하라.
*/
#include <iostream>
using namespace std;

void run()
{
    double max = -DBL_MAX;
    cout << "5 개의 실수를 입력하라>>";
    for(int i=0; i<5; i++)
    {
        double num;
        cin >> num;
        if(num > max)
            max = num;
    }
    cout << "제일 큰 수 = " << max << endl;
}

int main()
{
    run();
    return 0;
}