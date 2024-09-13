#include <iostream>
using namespace std;

// 가위0 가위0바위1보2  0 -1 -2
// 바위1 가위0바위1보2  1  0 -1
//   보2 가위0바위1보2  2  1  0

// 비기는 경우 A-B==0
// 이기는 경우 A-B==-2 || A-B==1
// 지는   경우 A-B==-1 || A-B==2

enum RSP {가위, 바위, 보};

int main()
{
    string input1;
    cout << "로미오>>";
    cin >> input1;
    RSP s = static_cast<RSP>(input1);

    string input2;
    cout << "줄리엣>>";
    cin >> input2;
    RSP t = static_cast<RSP>(input2);

    if(s - t == 0)
        cout << "비겼습니다." << endl;
    else if(s - t == -2 || s - t == 1)
        cout << "로미오가 이겼습니다." << endl;
    else
        cout << "줄리엣이 이겼습니다." << endl;
    
    return 0;
}