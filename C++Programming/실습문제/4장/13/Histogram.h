#ifndef HISTOGRAM_H
#define HISTOGRAM_H

#include <string>
using namespace std;

class Histogram
{
	string text;
	string firstText;
	int count;
	int size;
public:
	int arr[26] = { 0 };
	Histogram(string text);
	void put(string text);
	void putc(char c);
	void print();
};

#endif