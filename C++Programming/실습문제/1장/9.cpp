/*
이름, 주소, 나이를 입력받아 다시 출력하는 프로그램을 작성하라.
*/
#include <iostream>
#include <string>
using namespace std;

void run()
{
    char name[100], address[100];
    int age;
    cout << "이름은?";
    cin.getline(name, 100, '\n');
    cout << "주소?";
    cin.getline(address, 100, '\n');
    cout << "나이는?";
    cin >> age;
    cout << name << ", " << address << ", " << age << "세" << endl;
}

int main()
{
    run();
    return 0;
}