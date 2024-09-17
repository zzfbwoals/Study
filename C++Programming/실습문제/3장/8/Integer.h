#ifndef INTEGER_H
#define INTEGER_H
#include <string>
using namespace std;

class Integer
{
private:
	int num;
public:
	Integer(int n) { num = n; }
	Integer(string str) { num = stoi(str); }
	void set(int n) { num = n; }
	int get() { return num; }
	int isEven() { if (num % 2 == 0) return 1; else return 0; }
};

#endif INTEGER_H