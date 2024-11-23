#include <iostream>
#include <string>
using namespace std;

class BaseMemory {
	char* mem;
protected:
	BaseMemory(int size) { mem = new char[size]; }
	char& find(int index) { return mem[index]; }
	char get(int index) { return mem[index]; }
};
class ROM : public BaseMemory {
public:
	ROM(int memory, char* arr, int size) : BaseMemory(memory) {
		for (int i = 0; i < size; i++)
			find(i) = arr[i];
	}
	char read(int index) { return get(index); }
};
class RAM : public BaseMemory {
public:
	RAM(int memory) : BaseMemory(memory) { }
	void write(int index, char ch) {
		find(index) = ch;
	}
	char read(int index) { return get(index); }
};

int main()
{
	char x[5] = { 'h', 'e', 'l', 'l', 'o' };
	ROM biosROM(1024 * 10, x, 5); // 10KB의 ROM 메모리, 배열 x로 초기화 됨
	RAM mainMemory(1024 * 1024); // 1MB의 RAM 메모리

	// 0 번지에서 4 번지까지 biosROM에서 읽어 mainMemory에 복사
	for (int i = 0; i < 5; i++) mainMemory.write(i, biosROM.read(i));
	for (int i = 0; i < 5; i++) cout << mainMemory.read(i);
}