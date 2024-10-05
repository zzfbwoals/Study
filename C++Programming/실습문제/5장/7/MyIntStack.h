#ifndef MYINTSTACK_H
#define MYINTSTACK_H

class MyIntStack
{
	int p[10]; // 최대 10개의 정수 저장
	int tos; // 스택의 꼭대기를 가리키는 인덱스
public:
	MyIntStack();
	bool push(int n); // 정수 n 푸시, 꽉 차 있으면 false, 아니면 true 리턴
	bool pop(int& n); // 팝하여 n에 저장, 스택이 비어 있으면 false, 아니면 true 리턴
};

#endif