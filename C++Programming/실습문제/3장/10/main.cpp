#include <iostream>
#include "Add.h"
#include "Sub.h"
#include "Mul.h"
#include "Div.h"
using namespace std;

void run()
{
	Add a; Sub s; Mul m; Div d;
	while (1)
	{
		cout << "두 정수와 연산자를 입력하세요>>";
		int x, y;
		char c;
		cin >> x >> y >> c;
		switch (c)
		{
		case '+':
			a.setValue(x, y);
			cout << a.calculate() << endl;
			break;
		case '-':
			s.setValue(x, y);
			cout << s.calculate() << endl;
			break;
		case '*':
			m.setValue(x, y);
			cout << m.calculate() << endl;
			break;
		case '/':
			d.setValue(x, y);
			cout << d.calculate() << endl;
			break;
		default:
			cout << "입력 오류!!" << endl;
			continue;
		}
	}
}

int main()
{
	run();
	return 0;
}