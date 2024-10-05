#include <iostream>
using namespace std;

#include "MyIntStack.h"

MyIntStack::MyIntStack()
{
	tos = -1;
}

bool MyIntStack::push(int n)
{
	if (tos == 9)
		return false;
	p[++tos] = n;
	return true;
}

bool MyIntStack::pop(int& n)
{
	if (tos < 0)
		return false;
	n = p[tos--];
	return true;
}