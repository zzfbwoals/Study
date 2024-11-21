#include <iostream>
#include <string>
using namespace std;

class Product {
protected:
	int id; // 상품의 식별자
	string exp; // 상품 설명
	string prod; // 생산자
	int price; // 가격
public:
	Product(int id, string exp, string prod, int price) {
		this->id = id; this->exp = exp; this->prod = prod; this->price = price;
	}
	virtual void show() = 0;
};
class Book : public Product {
protected:
	int ISBN;
	string author; // 저자
	string bookName; // 책 제목
public:
	Book(int id, string exp, string prod, int price, int ISBN, string author, string bookName) : Product(id, exp, prod, price) { 
		this->ISBN = ISBN; this->author = author; this->bookName = bookName;
	}
	void show() {
		cout << "--- 상품ID : " << id << endl;
		cout << "상품설명 : " << exp << endl;
		cout << "생산자 : " << prod << endl;
		cout << "가격 : " << price << endl;
		cout << "ISBN : " << ISBN << endl;
		cout << "저자 : " << author << endl;
		cout << "책제목 : " << bookName << endl << endl; 
	}
};
class CompactDisc : public Product {
protected:
	string albumName; // 앨범 제목
	string singerName; // 가수 이름
public:
	CompactDisc(int id, string exp, string prod, int price, string albumName, string singerName) : Product(id, exp, prod, price) {
		this->albumName = albumName; this->singerName = singerName;
	}
	void show() {
		cout << "--- 상품ID : " << id << endl;
		cout << "상품설명 : " << exp << endl;
		cout << "생산자 : " << prod << endl;
		cout << "가격 : " << price << endl;
		cout << "앨범제목 : " << albumName << endl;
		cout << "가수 : " << singerName << endl << endl;
	}
};
class ConversationBook : public Book {
protected:
	string language; // 언어
public:
	ConversationBook(int id, string exp, string prod, int price, int ISBN, string author, string bookName, string language)
		: Book(id, exp, prod, price, ISBN, author, bookName) {
		this->language = language;
	}
	void show() {
		cout << "--- 상품ID : " << id << endl;
		cout << "상품설명 : " << exp << endl;
		cout << "생산자 : " << prod << endl;
		cout << "가격 : " << price << endl;
		cout << "ISBN : " << ISBN << endl;
		cout << "저자 : " << author << endl;
		cout << "책제목 : " << bookName << endl;
		cout << "언어 : " << language << endl << endl;
	}
};

int main()
{
	Product* p[100]; // 최대 100개의 상품 관리
	int cnt = 0; // 현재 상품 개수
	cout << "***** 상품 관리 프로그램을 작동합니다 *****" << endl;
	string id, exp, prod, author, bookName, albumName, singerName, language;
	int price, ISBN;
	while (true)
	{
		cout << "상품 추가(1), 모든 상품 조회(2), 끝내기(3) ? ";
		int cmd; cin >> cmd;
		if (cmd == 1)
		{
			cout << "상품 종류 책(1), 음악CD(2), 회화책(3) ? ";
			cin >> cmd;
			cin.ignore();
			if (cmd == 1)
			{
				cout << "상품설명>>"; getline(cin, exp);
				cout << "생산자>>"; getline(cin, prod);
				cout << "가격>>"; cin >> price;
				cin.ignore();
				cout << "ISBN>>"; cin >> ISBN;
				cin.ignore();
				cout << "저자>>"; getline(cin, author);
				cout << "책제목>>"; getline(cin, bookName);
				cout << endl;
				p[cnt] = new Book(cnt, exp, prod, price, ISBN, author, bookName);
				cnt++;
			}
			else if (cmd == 2)
			{
				cout << "상품설명>>"; getline(cin, exp);
				cout << "생산자>>"; getline(cin, prod);
				cout << "가격>>"; cin >> price;
				cin.ignore();
				cout << "앨범제목>>"; getline(cin, albumName);
				cout << "가수>>"; getline(cin, singerName);
				cout << endl;
				p[cnt] = new CompactDisc(cnt, exp, prod, price, albumName, singerName);
				cnt++;
			}
			else if (cmd == 3)
			{
				cout << "상품설명>>"; getline(cin, exp);
				cout << "생산자>>"; getline(cin, prod);
				cout << "가격>>"; cin >> price;
				cin.ignore();
				cout << "책제목>>"; getline(cin, bookName);
				cout << "저자>>"; getline(cin, author);
				cout << "언어>>"; getline(cin, language);
				cout << "ISBN>>"; cin >> ISBN;
				cin.ignore();
				cout << endl;
				p[cnt] = new ConversationBook(cnt, exp, prod, price, ISBN, author, bookName, language);
				cnt++;
			}
			else cout << "올바른 인덱스를 입력해주세요." << endl;
		}
		else if (cmd == 2)
		{
			for (int i = 0; i < cnt; i++)
				p[i]->show();
		}
		else if (cmd == 3)
		{
			break;
		}
		else cout << "올바른 번호를 입력해주세요." << endl;
	}
	for (int i = 0; i < cnt; i++) {
		delete p[i];
	}
}