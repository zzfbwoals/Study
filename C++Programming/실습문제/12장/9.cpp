#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

int main() {
    const char* data = "c:\\windows\\system.ini";
    fstream fp(data, ios::in);
    if (!fp) { cout << "file open error!" << endl; return 0; }

    vector<string> lines;
    string buf;
    while (getline(fp, buf)) {
        lines.push_back(buf);
    }

    cout << data << " 파일 읽기 완료" << endl;
    cout << "라인 번호를 입력하세요. 1보다 작은 값을 입력하면 종료" << endl;

    while (true) {
        cout << ": ";
        int cmd; cin >> cmd;
        if (cmd < 1) break;
        if (cmd > lines.size()) continue;
        cout << lines[cmd - 1] << endl;
    }
    fp.close();
    return 0;
}