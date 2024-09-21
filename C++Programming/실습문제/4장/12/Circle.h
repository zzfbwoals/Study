#ifndef CIRCLE_H
#define CIRCLE_H

#include <string>
using namespace std;

class Circle
{
	int radius;
	string name;
public:
	void setCircle(string name, int radius) { this->name = name; this->radius = radius; }
	double getArea() { return (double)(radius * radius * 3.14); }
	string getName() { return name; }
};

#endif