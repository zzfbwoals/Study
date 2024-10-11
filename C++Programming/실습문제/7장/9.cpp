#include <iostream>
using namespace std;

class Circle; // 전방 선언
Circle operator + (int n, Circle c); // 전방참조

class Circle
{
	int radius;
public:
	Circle(int radius = 0) { this->radius = radius; }
	void show() { cout << "radius = " << radius << " 인 원" << endl; }
	friend Circle operator + (int n, Circle c);
};

Circle operator + (int n, Circle c)
{
	Circle temp;
	temp.radius = n + c.radius;
	return temp;
}

int main()
{
	Circle a(5), b(4);
	b = 1 + a;
	a.show();
	b.show();
}