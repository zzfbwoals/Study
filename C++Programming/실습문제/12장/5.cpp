#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
	const char* data = "OpenChallenge.cpp";
	fstream fp(data, ios::in);
	if (!fp) { cout << "file open error!" << endl; return 0; }

	string buf;
	while (getline(fp, buf)) {
		if (buf.find('/') != string::npos);
		else cout << buf << endl;
	}

	fp.close();

}