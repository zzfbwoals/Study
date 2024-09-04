#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    // 세 각의 크기가 모두 60이면, Equilateral
    if(a==60 && b==60 && c==60)
        cout << "Equilateral\n";
    // 세 각의 합이 180이고, 두 각이 같은 경우에는 Isosceles
    else if((a+b+c==180 && a==b) || (a+b+c==180 && a==c) || (a+b+c==180 && c==b))
        cout << "Isosceles\n";
    // 세 각의 합이 180이고, 같은 각이 없는 경우에는 Scalene
    else if(a+b+c==180 && a!=b && b!=c && a!=c)
        cout << "Scalene\n";
    // 세 각의 합이 180이 아닌 경우에는 Error
    else
        cout << "Error\n";
    return 0;
}