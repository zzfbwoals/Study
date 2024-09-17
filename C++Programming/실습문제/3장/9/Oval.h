#ifndef OVAL_H
#define OVAL_H
#include <iostream>
using namespace std;

class Oval
{
private:
	int width;
	int height;
public:
	Oval() { width = height = 1; }
	Oval(int w, int h) { width = w; height = h; }
	~Oval() { cout << "Oval 소멸 : " << "width = " << width << ", heigth = " << height << endl; }
	int getWidth() { return width; }
	int getHeight() { return height; }
	void set(int w, int h) { width = w; height = h; }
	void show() { cout << "width = " << width << ", heigth = " << height << endl; }
};

#endif OVAL_H