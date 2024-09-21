#ifndef CIRCLEMANAGER_H
#define CIRCLEMANAGER_H

#include "Circle.h"

class CircleManager
{
	Circle* p;
	int size;
public:
	CircleManager(int size) { p = new Circle[size]; this->size = size; }
	~CircleManager() { delete[] p; }
	Circle* getCircle(int i) { return &p[i]; }
	void searchByName();
	void searchByArea();
};

#endif