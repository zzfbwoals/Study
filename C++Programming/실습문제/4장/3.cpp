#include <string>
#include <iostream>
using namespace std;

void run1()
{
    int count = 0;
    cout << "문자열 입력>> ";
    string str;
    getline(cin, str);
    for(int i=0; i<str.length(); i++)
    {
        if(str[i]=='a')
            count++;
    }
    cout << "문자 a는 " << count << "개 있습니다." << endl;
}

void run2()
{
    int count = 0; int index = 0;
    cout << "문자열 입력>> ";
    string str;
    getline(cin, str);
    while(true)
    {
        index = str.find( 'a' , index );
        if(index == -1)
            break;
        else
        {
            count++; index++;
        }
    }
    cout << "문자 a는 " << count << "개 있습니다." << endl;    
}

int main()
{
    run2();
    return 0;
}