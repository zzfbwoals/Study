#include <iostream>
#include <fstream>
#include <vector>
#include <string>
using namespace std;

int countDifferences(const string& a, const string& b) {
    // if (a.length() != b.length()) return 2; // 길이가 다르면 바로 제외
    int diff = 0;
    for (int i = 0; i < a.length(); i++) {
        if (a[i] != b[i]) diff++;
        if (diff > 1) return diff; // 차이가 2개 이상이면 즉시 반환
    }
    return diff;
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

        for (const auto& temp : v) {
            if (countDifferences(buf, temp) == 1) {
                cout << temp << endl;
            }
        }
    }
    return 0;
}