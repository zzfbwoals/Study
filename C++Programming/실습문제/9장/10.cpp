#include <iostream>
#include <string>
using namespace std;

class Shape {
	Shape* next;
protected:
	virtual void draw() = 0;
public:
	Shape() { next = NULL; }
	virtual ~Shape() {}
	void paint() {
		draw();
	}
	Shape* add(Shape* p) {
		this->next = p;
		return p;
	}
	Shape* getNext() { return next; }
	void setNext(Shape* next) { this->next = next; }
};
class Circle : public Shape {
protected:
	void draw() {
		cout << "Circle" << endl;
	}
};
class Rect : public Shape {
protected:
	void draw() {
		cout << "Rect" << endl;
	}
};
class Line : public Shape {
protected:
	void draw()
	{
		cout << "Line" << endl;
	}
};
class UI {
public:
	static int cmd;
	static void menu() { cout << "삽입:1, 삭제:2, 모두보기:3, 종료:4 >> "; cin >> cmd; }
	static void insert() { cout << "선:!, 원:2, 사각형:3 >> "; cin >> cmd; }
	static void del() { cout << "삭제하고자 하는 도형의 인덱스 >> "; cin >> cmd; }
};
int UI::cmd = 0;

class GraphicEditor {
	Shape* pStart;
	Shape* pLast;
public:
	GraphicEditor() { this->pStart = NULL; this->pLast = this->pStart; }
	void insert(int cmd) {
		Shape* newShape = NULL;

		if (cmd == 1)
			newShape = new Line();
		else if (cmd == 2)
			newShape = new Circle();
		else if (cmd == 3)
			newShape = new Rect();
		else {
			cout << "올바른 입력을 해주세요." << endl;
			return;
		}

		if (pStart == NULL) {
			pStart = newShape;
			pLast = newShape;
		}
		else {
			pLast = pLast->add(newShape);
		}
	}
	void del(int cmd) {
		if (cmd < 0) {
			cout << "올바른 인덱스를 입력해주세요." << endl;
			return;
		}

		Shape* p = pStart;
		Shape* prev = NULL;
		for (int i = 0; p != NULL; i++) {
			if (i == cmd) {
				if (prev == NULL) {
					pStart = p->getNext();
				}
				else {
					prev->setNext(p->getNext());
				}
				delete p;
				return;
			}
			prev = p;
			p = p->getNext();
		}
		cout << "해당 인덱스에 도형이 없습니다." << endl;
	}
	void show() {
		Shape* p = pStart;
		for (int i = 0; p != NULL; i++) {
			cout << i << ": ";
			p->paint();
			p = p->getNext();
		}
	}
	void run() {
		cout << "그래픽 에디터입니다." << endl;
		while (true) {
			UI::menu();
			if (UI::cmd == 1) {
				UI::insert();
				insert(UI::cmd);
			}
			else if (UI::cmd == 2) {
				UI::del();
				del(UI::cmd);
			}
			else if (UI::cmd == 3) {
				show();
			}
			else if (UI::cmd == 4) {
				break;
			}
			else {
				cout << "올바른 입력을 해주세요." << endl;
			}
		}
	}
};

int main()
{
	GraphicEditor ge;
	ge.run();
}