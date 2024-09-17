#ifndef DIV_H
#define DIV_H

class Div
{
private:
	int a, b;
public:
	void setValue(int x, int y) { a = x; b = y; }
	int calculate() { return a / b; }
};

#endif DIV_H