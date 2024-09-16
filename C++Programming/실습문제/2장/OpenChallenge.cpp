#include <iostream>
using namespace std;

// 가위0 가위0바위1보2  0 -1 -2
// 바위1 가위0바위1보2  1  0 -1
//   보2 가위0바위1보2  2  1  0

// 비기는 경우 A-B==0
// 이기는 경우 A-B==-2 || A-B==1
// 지는   경우 A-B==-1 || A-B==2
int reInt(string s)
{
    if(s=="가위")
        return 0;
    else if(s=="바위")
        return 1;
    else   
        return 2;
}

int main()
{
    string input1;
    int num1;
    cout << "로미오>>";
    cin >> input1;
    num1 = reInt(input1);

    string input2;
    int num2;
    cout << "줄리엣>>";
    cin >> input2;
    num2 = reInt(input2);

    if(num1-num2==0)
        cout << "비겼습니다." << endl;
    else if(num1-num2==1 || num1-num2==-2)
        cout << "로미오가 이겼습니다." << endl;
    else
        cout << "줄리엣이 이겼습니다." << endl;
    return 0;
}