#include <iostream>
#include <sstream>
#include <string>
using namespace std;

void run()
{
    while (true)
    {
        cout << "? ";
        string input;
        getline(cin, input);  // 전체 입력을 한 줄로 받음
        istringstream iss(input);  // 스트림으로 처리

        int x, y;
        char op;
        
        iss >> x >> op >> y;  // 정수 x, 연산자 op, 정수 y로 분리
        
        if (op == '+')
            cout << x << " + " << y << " = " << x + y << endl;
        else if (op == '-')
            cout << x << " - " << y << " = " << x - y << endl;
        else if (op == '*')
            cout << x << " * " << y << " = " << x * y << endl;
        else if (op == '/')
        {
            if (y == 0)
                cout << "Error: Division by zero!" << endl;
            else
                cout << x << " / " << y << " = " << x / y << endl;
        }
        else if (op == '%')
        {
            if (y == 0)
                cout << "Error: Division by zero!" << endl;
            else
                cout << x << " % " << y << " = " << x % y << endl;
        }
        else
        {
            cout << "Invalid operator!" << endl;
        }
    }
}

int main()
{
    run();
    return 0;
}
