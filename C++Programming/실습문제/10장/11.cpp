#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Book {
	string year;
	string name;
	string author;
public:
	Book(string year = "", string name = "", string author = "") { this->year = year; this->name = name; this->author = author; }
	string getAuthor() { return author; }
	string getYear() { return year; }
	void show() { cout << year << "년도, " << name << ", " << author << endl; }
};

int main() {
	vector<Book> book;
	string year, name, author;
	cout << "입고할 책을 입력하세요. 년도에 -1을 입력하면 입고를 종료합니다." << endl;
	while (true) {
		cout << "년도>>"; getline(cin, year);
		if (year == "-1") break;
		cout << "책이름>>"; getline(cin, name);
		cout << "저자>>"; getline(cin, author);
		Book temp(year, name, author);
		book.push_back(temp);
	}

	cout << "총 입고된 책은 " << book.size() << "권입니다." << endl;
	cout << "검색하고자 하는 저자 이름을 입력하세요>>"; getline(cin, author);
	for (int i = 0; i < book.size(); i++) {
		if (book[i].getAuthor() == author) {
			book[i].show();
			break;
		}
	}
	cout << "검색하고자 하는 년도를 입력하세요>>"; getline(cin, year);
	for (int i = 0; i < book.size(); i++) {
		if (book[i].getYear() == year) {
			book[i].show();
			break;
		}
	}
}