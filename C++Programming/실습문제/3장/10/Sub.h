#ifndef SUB_H
#define SUB_H

class Sub
{
private:
	int a, b;
public:
	void setValue(int x, int y) { a = x; b = y; }
	int calculate() { return a - b; }
};

#endif