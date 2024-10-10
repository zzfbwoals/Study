#include <iostream>
#include <string>
using namespace std;

class Trace
{
    static string info[100][2];
    static int index;
public:
    static void put(string tag, string info)
    {
        Trace::info[index][0]=tag;
        Trace::info[index][1]=info;
        index++;
    }
    static void print(string tag= "")
    {
        if(tag=="")
        {
            cout << "----- 모든 Trace 정보를 출력합니다. -----" << endl;
            for(int i=0; i<index; i++)
            {
                cout << info[i][0] << ":" << info[i][1] << endl;
            }
        }
        else
        {
            cout << "----- " << tag << "태그의 Trace 정보를 출력합니다. -----" << endl;
            for(int i=0; i<index; i++)
            {
                if(info[i][0]==tag)
                    cout << info[i][0] << ":" << info[i][1] << endl;
            }
        }
    }
};

string Trace::info[100][2]={};
int Trace::index=0;

void f()
{
    int a, b, c;
    cout << "두 개의 정수를 입력하세요>>";
    cin >> a >> b;
    Trace::put("f()", "정수를 입력 받았음");
    c = a + b;
    Trace::put("f()", "합 계산");
    cout << "합은 " << c << endl;
}

int main()
{
    Trace::put("main()", "프로그램을 시작합니다");
    f();
    Trace::put("main()", "종료");

    Trace::print("f()");
    Trace::print();
}