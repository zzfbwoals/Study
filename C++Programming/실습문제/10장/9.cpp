#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
	vector<int> v;
	int cmd = 0;
	while (true) {
		cout << "정수를 입력하세요(0을 입력하면 종료)>>";
		cin >> cmd;
		if (cmd == 0) break;
		v.push_back(cmd);
		double avg = 0;
		for (int i = 0; i < v.size(); i++) {
			cout << v[i] << ' ';
			cout << endl;
			avg += v[i];
		}
		avg /= v.size();
		cout << "평균 = " << avg << endl;
	}
}