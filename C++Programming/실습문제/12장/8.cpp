#include <iostream>
#include <fstream>
#include <iomanip>
#include <cctype>
using namespace std;

int main() {
	const char* data = "c:\\windows\\system.ini";
	fstream fp(data, ios::in | ios::binary);
	if (!fp) { cout << "file open error!" << endl; return 0; }

	int c, count = 0;
	while ((c = fp.get()) != EOF) {
		if (c == '\r' || c == '\n') cout << "0";
		cout << hex << c << ' ';
		count++;
		if (count % 8 == 0) cout << endl;
	}

	cout << endl;

	count = 0;
	fp.clear();
	fp.seekg(0, ios::beg);
	while ((c = fp.get()) != EOF) {
		if (isprint(c)) cout << (char)c << ' ';
		else cout << ". ";
		count++;
		if (count % 8 == 0) cout << endl;
	}

	fp.close();
}