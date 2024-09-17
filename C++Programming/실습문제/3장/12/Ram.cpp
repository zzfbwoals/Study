#include "Ram.h"
#include <iostream>
#include <cstring>
using namespace std;

Ram::Ram()
{
    // 배열을 0으로 초기화
    memset(mem, 0, sizeof(mem));  // 모든 메모리 값을 0으로 설정
    size = 100 * 1024;            // 메모리 크기 설정
}

Ram::~Ram()
{
    cout << "메모리 제거됨" << endl;
}

char Ram::read(int address)
{
    return mem[address];
}

void Ram::write(int address, char value)
{
    mem[address] = value;
}
