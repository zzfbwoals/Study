// 20214045_류재민_11장_1번
#include <iostream>
using namespace std;

int main()
{
	int count = 0; // a 개수를 확인하기 위한 변수
	// <Enter> 키가 입력될 때까지 키보드에서 문자를 읽고 출력하는 코드
	int ch;
	while ((ch = cin.get()) != EOF) // 키보드에서 문자 읽기
	{
		if (ch == 'a') count++; // 읽은 문자가 a이면 count 증가
		if (ch == '\n') break; // <Enter> 키가 입력된 경우 읽기 중단
	}
	cout << "a 개수 >> " << count << endl; // 입력된 라인에서 a의 개수 출력
}