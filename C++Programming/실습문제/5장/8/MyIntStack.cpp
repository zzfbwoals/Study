#include <iostream>
using namespace std;

#include "MyIntStack.h"

MyIntStack::MyIntStack() :MyIntStack(10) {}

MyIntStack::MyIntStack(int size)
{
	this->size = size;
	p = new int[size];
	tos = -1;
}

MyIntStack::MyIntStack(const MyIntStack& s)
{
	this->size = s.size;
	this->p = new int[size];
	this->tos = s.tos;
}

MyIntStack::~MyIntStack()
{
	delete[] p;
}

bool MyIntStack::push(int n)
{
	if (tos >= size - 1)
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