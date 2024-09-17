#include <iostream>
#include "Integer.h"
using namespace std;

int main()
{
	Integer n(30);
	cout << n.get() << ' '; 
	n.set(50);
	cout << n.get() << ' ';

	Integer m("300");
	cout << m.get() << ' ';
	cout << m.isEven();
	return 0;
}