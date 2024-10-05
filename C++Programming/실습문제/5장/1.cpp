#include <iostream>
using namespace std;

class Circle
{
    int radius;
public:
    Circle(){}
    Circle(int radius){ this->radius = radius; }
    int getRadius() { return radius; }
};

void swap(Circle& a, Circle& b)
{
    Circle temp;
    temp = a;
    a = b;
    b = temp;
}

int main()
{
    Circle a(1);
    Circle b(2);
    cout << a.getRadius() << " " << b.getRadius() << endl;
    swap(a, b);
    cout << a.getRadius() << " " << b.getRadius() << endl;
    return 0;
}