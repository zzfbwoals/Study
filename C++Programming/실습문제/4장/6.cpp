#include <string>
#include <iostream>
using namespace std;

int main()
{
    cout << "아래에 한 줄을 입력하세요.(exit를 입력하면 종료합니다)" << endl;
    while(true)
    {
        cout << ">>";
        string text;
        getline(cin, text);
        if(text=="exit")
            break;
        int n = text.length();
        for(int i=n-1; i>=0; i--)
        {
            cout << text[i];
        }
        cout << endl;
    }
    return 0;
}