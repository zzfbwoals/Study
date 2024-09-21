#include "CoffeeVendingMachine.h"
#include <iostream>
using namespace std;

void CoffeeVendingMachine::fill()
{
	for (int i = 0; i < 3; i++)
	{
		tong[i].fill();
	}
	cout << "커피 " << tong[0].getSize() << ", 물 " << tong[1].getSize() << ", 설탕 " << tong[2].getSize() << endl;
}

void CoffeeVendingMachine::run()
{
	cout << "***** 커피자판기를 작동합니다. *****" << endl;
	while (true)
	{
		cout << "메뉴를 눌러주세요(1:에스프레소, 2:아메리카노, 3:설탕커피, 4:잔량보기, 5:채우기)>> ";
		int num;
		cin >> num;
		switch (num)
		{
		case 1:
		{
			selectEspresso();
			cout << "에스프레소 드세요" << endl;
			break;
		}
		case 2:
		{
			selectAmericano();
			cout << "아메리카노 드세요" << endl;
			break;
		}
		case 3:
		{
			selectSugarCoffee();
			cout << "설탕커피 드세요" << endl;
			break;
		}
		case 4:
		{
			show();
			break;
		}
		case 5:
		{
			fill();
			break;
		}
		default:
		{
			cout << "다시 입력하세요" << endl;
		}
		}
	}
}