#include <iostream>
#include <string>
using namespace std;

class LoopAdder {
	string name;
	int x, y, sum;
	void read() {
		cout << name << ":" << endl;
		cout << "처음 수에서 두번째 수까지 더합니다. 두 수를 입력하세요 >> ";
		cin >> x >> y;
	}
	void write() {
		cout << x << "에서 " << y << "까지의 합 = " << sum << " 입니다" << endl;
	}
protected:
	LoopAdder(string name = "") { this->name = name; }
	int getX() { return x; }
	int getY() { return y; }
	virtual int calculate() = 0;
public:
	void run() {
		read();
		sum = calculate();
		write();
	}
};
class WhileLoopAdder : public LoopAdder {
public:
	WhileLoopAdder(string name) : LoopAdder(name) {}
	int calculate() {
		int i=getX(), temp = 0;
		while (i <= getY())
		{
			temp += i;
			i++;
		}
		return temp;
	}
};
class DoWhileLoopAdder : public LoopAdder {
public:
	DoWhileLoopAdder(string name) : LoopAdder(name) {}
	int calculate() {
		int i = getX(), temp = 0;
		do {
			temp += i;;
			i++;
		} while (i <= getY());
		return temp;
	}
};

int main()
{
	WhileLoopAdder whileLoop("While Loop");
	DoWhileLoopAdder doWhileLoop("Do while Loop");

	whileLoop.run();
	doWhileLoop.run();
}