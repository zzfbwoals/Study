#ifndef CONTAINER_H
#define CONTAINER_H

class Container
{
	int size;
public:
	Container() { size = 10; }
	void fill() { size = 10; }
	void consume() { size--; }
	int getSize() { return size; }
};

#endif