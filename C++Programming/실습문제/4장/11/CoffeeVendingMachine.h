#ifndef COFFEEVENDINGMACHINE_H
#define COFFEEVENDINGMACHINE_H

#include "Container.h"
#include <iostream>
using namespace std;

class CoffeeVendingMachine
{
	Container tong[3];
	void fill();
	void selectEspresso() { tong[0].consume(); tong[1].consume(); }
	void selectAmericano() { tong[0].consume(); tong[2].consume(); }
	void selectSugarCoffee() { tong[0].consume(); tong[1].consume(); tong[2].consume(); tong[2].consume(); }
	void show() { cout << "커피 " << tong[0].getSize() << ", 물 " << tong[1].getSize() << ", 설탕 " << tong[2].getSize() << endl; }
public:
	void run();
};

#endif