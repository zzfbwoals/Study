#include <iostream>
#include <fstream>
using namespace std;

int main() {
	const char* data = "c:\\windows\\system.ini";
	fstream fp(data, ios::in | ios::binary);
	if (!fp) { cout << "file open error!" << endl; return 0; }

	char buf[100]; int count = 0;
	while (!fp.eof()) {
		fp.read(buf, 100);
		count += fp.gcount();
	}
	cout << "파일의 크기 : " << count << endl;

	fp.close();
}