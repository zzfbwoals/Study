#include <iostream>
#include <fstream>
#include <vector>
#include <string>
using namespace std;

int countDifferences(const string& a, const string& b) {
    for (int i = 0; i < a.length(); i++) {
        if (a[i] != b[i]) return -1;
    }
    return 1;
}

int main() {
    vector<string> v;
    fstream fp("words.txt", ios::in);
    if (!fp) { cout << "file open error!" << endl; return 0; }

    string buf;
    while (getline(fp, buf)) {
        v.push_back(buf);
    }
    fp.close();
    cout << "... words.txt 파일 로딩 완료" << endl;

    cout << "검색을 시작합니다. 단어를 입력해 주세요." << endl;
    while (true) {
        cout << "단어>> "; cin >> buf;
        if (buf == "exit") break;
        bool check = false;
        for (int i = 0; i < v.size(); i++) {
            string temp = v[i];
            if (countDifferences(buf, temp) == 1) {
                check = true;
                cout << temp << endl;
            }
        }
        if(check==false) cout << "발견할 수 없음" << endl;
    }
    return 0;
}