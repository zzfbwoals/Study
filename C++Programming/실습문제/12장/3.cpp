#include <iostream>
#include <fstream>
using namespace std;

int main() {
	const char* data = "c:\\windows\\system.ini";
	fstream fp(data, ios::in);
	if (!fp) { cout << "file open error!" << endl; return 0; }

	int c;
	while ((c = fp.get()) != EOF) {
		if (islower(c)) 
			c=toupper(c);
		cout.put(c);
	}

	fp.close();
}