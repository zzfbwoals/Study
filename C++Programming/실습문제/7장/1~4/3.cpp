#include <iostream>
using namespace std;

#include "Book.h"

int main()
{
	Book book("벼룩시장", 0, 50);
	if (!book) cout << "공짜다" << endl;
}