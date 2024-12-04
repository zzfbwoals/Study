#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
	const char* data = "c:\\windows\\system.ini";
	const char* data2 = "data.txt";
	fstream fp(data, ios::in | ios::binary);
	if (!fp) { cout << "file open error!" << endl; return 0; }
	fstream fp2(data2, ios::out | ios::binary);
	if (!fp2) { cout << "file open error!" << endl; return 0; }

	fp.seekg(0, ios::end);
	int size = fp.tellg();
	int per = size / 10; int count = 0; int suc = 10; int sum = 0;
	
	cout << "복사 시작..." << endl;
	int c;
	fp.seekg(0, ios::beg);
	while ((c = fp.get()) != EOF) {
		fp2.put((char)c);
		count++;
		if (count == per) {
			cout << "." << count << "B " << suc << '%' << endl;
			sum += count;
			count = 0; suc += 10;
		}
	}
	// 마지막 남은 바이트 처리
	if (count > 0) {
		sum += count;
	}
	cout << sum << "B 복사 완료" << endl;

	fp.close();
	fp2.close();
}