#include <iostream>
using namespace std;

#include "Book.h"

int main()
{
	Book a("청춘", 20000, 300), b("미래", 30000, 500);
	a += 500;
	b -= 500;
	a.show();
	b.show();
}