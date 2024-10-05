#ifndef MYINTSTACK_H
#define MYINTSTACK_H

class MyIntStack
{
	int* p; // 스택 메모리로 사용할 포인터
	int size; // 스택의 최대 크기
	int tos; // 스탭의 탑을 가리키는 인덱스
public:
	MyIntStack();
	MyIntStack(int size);
	MyIntStack(const MyIntStack& s);
	~MyIntStack();
	bool push(int n); // 정수 n 푸시, 꽉 차 있으면 false, 아니면 true 리턴
	bool pop(int& n); // 팝하여 n에 저장, 스택이 비어 있으면 false, 아니면 true 리턴
};

#endif