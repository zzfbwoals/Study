#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
	const char* data = "c:\\windows\\system.ini";
	const char* data2 = "system.txt";
	fstream fp(data, ios::in | ios::binary);
	if (!fp) { cout << "file open error!" << endl; return 0; }
	fstream fp2(data2, ios::out | ios::binary);
	if (!fp2) { cout << "file open error!" << endl; return 0; }

	fp.seekg(0, ios::end);
	int size = fp.tellg();
	
	int index = -1, c;
	fp.seekg(-1, ios::end);
	while ((-1 * index) != size) {
		c = fp.get();
		fp2.put((char)c);
		index--;
		fp.seekg(index, ios::end);
	}

	fp.close();
	fp2.close();
}