#ifndef FAMILY_H
#define FAMILY_H

#include "Person.h"
#include <string>
using namespace std;

class Family
{
	Person* p;
	int size;
	string name;
public:
	Family(string name, int size) { p = new Person[size]; this->name = name; this->size = size; }
	void show();
	void setName(int i, string name);
	~Family() { delete[] p; }
};

#endif