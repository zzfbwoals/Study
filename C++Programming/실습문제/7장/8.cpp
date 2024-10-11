#include <iostream>
using namespace std;

class Circle; // 전방 선언
Circle& operator++(Circle& c); // 전방 참조
Circle operator++(Circle& c, int x); // 전방 참조

class Circle
{
	int radius;
public:
	Circle(int radius = 0) { this->radius = radius; }
	void show() { cout << "radius = " << radius << " 인 원" << endl; }
	friend Circle& operator++(Circle &c);
	friend Circle operator++(Circle& c, int x);
};

Circle& operator++(Circle &c)
{
	c.radius++;
	return c;
}
Circle operator++(Circle& c, int x)
{
	Circle temp = c;
	c.radius++;
	return temp;
}

int main()
{
	Circle a(5), b(4);
	++a;
	b = a++;
	a.show();
	b.show();
}