// 20214045_류재민_11장_2번
#include <iostream>
using namespace std;

int main()
{
	int count = 0; // 빈칸(' ') 개수를 확인하기 위한 변수
	char ch;
	while (true)
	{
		cin.get(ch); // 키를 ch에 읽어옴
		if (cin.eof()) break; // EOF 문자 즉 ctrl-z 키가 입력된 경우, 읽기 종료
		if (ch == ' ') count++; // 빈칸(' ')이 입력된 경우 count 증가
		if (ch == '\n') break; // <Enter> 키가 입력된 경우 읽기 중단
	}
	cout << "빈칸(' ') 개수 >> " << count << endl; // 입력된 라인에서 빈칸(' ')의 개수 출력
}