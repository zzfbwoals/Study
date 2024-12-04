#include <iostream>
#include <fstream>
using namespace std;

int main() {
	const char* data = "c:\\windows\\system.ini";
	const char* data2 = "data.txt";
	fstream fp(data, ios::in);
	if (!fp) { cout << "file open error!" << endl; return 0; }
	fstream fp2(data2, ios::out);
	if (!fp) { cout << "file open error!" << endl; return 0; }

	int c;
	while ((c = fp.get()) != EOF) {
		if (islower(c))
			c = toupper(c);
		fp2.put(c);
	}

	fp.close();
	fp2.close();
}