#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Shape {
protected:
	virtual void draw() = 0;
public:
	void paint() { draw(); }
};
class Circle : public Shape {
protected:
	void draw() { cout << "Circle" << endl; }
};
class Rect : public Shape {
protected:
	void draw() { cout << "Rect" << endl; }
};
class Line : public Shape {
protected:
	void draw() { cout << "Line" << endl; }
};

class UI {
public:
	static int menu() {
		cout << "삽입:1, 삭제:2, 모두보기:3, 종료:4 >> ";
		int cmd; cin >> cmd;
		return cmd;
	}
	static int shape() {
		cout << "선:1, 원:2, 사각형:3 >> ";
		int cmd; cin >> cmd;
		return cmd;
	}
	static int removeIndex() {
		cout << "삭제하고자 하는 도형의 인덱스 >> ";
		int cmd; cin >> cmd;
		return cmd;
	}
};

class GraphicEditor {
	vector<Shape*> v;
	enum { INSERT = 1, REMOVE = 2, SHOW = 3, EXIT = 4 };
	enum { LINE = 1, CIRCLE = 2, RECT = 3 };
	void insert() {
		int cmd = UI::shape();
		switch (cmd) {
		case LINE:
			v.push_back(new Line()); break;
		case CIRCLE:
			v.push_back(new Circle()); break;
		case RECT:
			v.push_back(new Rect()); break;
		default:
			cout << "잘못 입력하셨습니다." << endl; break;
		}
	}
	void remove() {
		int cmd = UI::removeIndex();
		auto it = v.begin() + cmd;
		delete* it;
		it = v.erase(it);
	}
	void show() {
		for (int i = 0; i < v.size(); i++) {
			cout << i << ": ";
			v[i]->paint();
		}
	}
public:
	void run() {
		cout << "그래픽 에디터입니다." << endl;
		while (true) {
			int cmd = UI::menu();
			switch (cmd) {
			case INSERT:
				insert(); break;
			case REMOVE:
				remove(); break;
			case SHOW:
				show(); break;
			case EXIT:
				return;
			default:
				cout << "다시 입력하세요." << endl; break;
			}
		}
	}
};

int main() {
	GraphicEditor ge;
	ge.run();
}