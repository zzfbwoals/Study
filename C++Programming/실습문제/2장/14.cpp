/*
커피를 주문하는 간단한 C++ 프로그램을 작성해보자.
커피 종류는 에스프레소, 아메키라노, 카푸치노의 3가이지며
가격은 2000원, 2300원, 2500원이다.
하루에 20000원 이상 벌게 되면 카페를 닫는다.
실행 결과와 같이 작동하는 프로그램을 작성하라.
*/
#define MAX_SIZE 100
#include <iostream>
#include <cstring>
using namespace std;

bool checkInputError()
{
	if (cin.fail())
	{
		cin.clear();
		cin.ignore(MAX_SIZE, '\n');
		cout << "입력 오류" << endl;
		return true; // 오류 있음
	}
	else
		return false; // 오류 없음
}

void run()
{
	cout << "에스프레소 2000원, 아메리카노 2300원, 카푸치노 2500원입니다." << endl;
	int sum = 0;
	while (sum < 20000)
	{
		cout << "주문>> ";
		char coffee[MAX_SIZE];
		int count;
		cin >> coffee >> count;
		if (checkInputError())
			continue;
		if (strcmp(coffee, "에스프레소") == 0)
		{
			sum += 2000 * count;
			cout << 2000 * count << "원입니다. 맛있게 드세요" << endl;
		}
		else if (strcmp(coffee, "아메리카노") == 0)
		{
			sum += 2300 * count;
			cout << 2300 * count << "원입니다. 맛있게 드세요" << endl;
		}
		else if (strcmp(coffee, "카푸치노") == 0)
		{
			sum += 2500 * count;
			cout << 2500 * count << "원입니다. 맛있게 드세요" << endl;
		}
	}
	cout << "오늘 " << sum << "원을 판매하여 카페를 닫습니다. 내일 봐요~~~" << endl;
}

int main()
{
	run();
	return 0;
}