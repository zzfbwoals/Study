#ifndef PERSON_H
#define PERSON_H

#include <string>
using namespace std;

class Person
{
	string name;
public:
	Person() {}
	Person(string name) { setName(name); }
	void setName(string name) { this->name = name; }
	string getName() { return name; }
};

#endif