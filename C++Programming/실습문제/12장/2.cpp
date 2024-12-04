#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
	const char* data = "c:\\windows\\system.ini";
	fstream fp(data, ios::in);
	if (!fp) { cout << "file open error!" << endl; return 0; }

	string buf; int i = 1;
	while (getline(fp, buf)) {
		cout << i << " : " << buf << endl;
		i++;
	}

	fp.close();
}