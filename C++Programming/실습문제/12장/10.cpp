#include <iostream>
#include <fstream>
using namespace std;

class FileCompare {
	string name;
public:
	FileCompare(string name = "") { this->name = name; }
	string getName() { return name; }
	friend void compare(FileCompare a, FileCompare b);
};

void compare(FileCompare a, FileCompare b) {
	fstream fpA(a.getName(), ios::in | ios::binary);
	if (!fpA) { cout << "file open error!" << endl; return; }
	fstream fpB(b.getName(), ios::in | ios::binary);
	if (!fpB) { cout << "file open error!" << endl; return; }

	int cA, cB;
	while ((cA = fpA.get()) != EOF) {
		cB = fpB.get();
		if (cA != cB) {
			cout << "다릅니다!!" << endl;
			fpA.close();
			fpB.close();
			return;
		}
	}
	cout << "같습니다!!" << endl;

	fpA.close();
	fpB.close();
}

int main() {
	FileCompare a("실행화면.png");
	FileCompare b("실행화면.png");
	compare(a, b);
}