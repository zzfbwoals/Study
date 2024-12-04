#include <iostream>
#include <fstream>
using namespace std;

int main() {
	const char* data = "data.txt";

	fstream fp(data, ios::out);
	int num; string str;
	cin >> num >> str;
	fp << num << endl << str << endl;

	fp.close();
}