#include <iostream>
#include <string>
#include <vector>
using namespace std;

class UI {
public:
    static int getMainMenu();
    static void getCircle(int&, string&);
    static string getCircleName();
    static void println(string = "");
    static void print(string);
    static void print(int);
};
int UI::getMainMenu() {
    cout << "삽입:1, 삭제:2, 모두보기:3, 종료:4 >> ";
    int cmd;
    cin >> cmd;
    return cmd;
}

void UI::getCircle(int& radius, string& name) {
    cout << "생성하고자 하는 원의 반지름과 이름은 >> ";
    cin >> radius >> name;
}

string UI::getCircleName() {
    cout << "삭제하고자 하는 원의 이름은 >> ";
    string name;
    cin >> name;
    return name;
}

void UI::println(string str) {
    cout << str << endl;
}

void UI::print(string str) {
    cout << str;
}

void UI::print(int number) {
    cout << number;
}
class Circle {
	string name; // 이름
	int radius; // 반지름
public:
	Circle(int radius, string name) { this->radius = radius; this->name = name; }
	double getArea() { return 3.14 * radius * radius; }
	string getName() { return name; }
};
class CircleVectorManager {
	enum { EDIT = 1, REMOVE = 2, PAINT = 3, EXIT = 4 };
	vector<Circle*> v;
	void edit();
	void remove();
	void paint();
public:
	CircleVectorManager();
	~CircleVectorManager();
	void run();
};
CircleVectorManager::CircleVectorManager() {}
CircleVectorManager::~CircleVectorManager() {}
void CircleVectorManager::edit() {
    int radius;
    string name;
    UI::getCircle(radius, name);
    v.push_back(new Circle(radius, name));
}
void CircleVectorManager::remove() {
    string name = UI::getCircleName();

    for (auto it = v.begin(); it != v.end(); ) {
        if ((*it)->getName() == name) {
            delete* it; // 동적 할당된 메모리 해제
            it = v.erase(it); // 벡터에서 원소 제거 및 다음 원소를 가리키는 반복자 반환
        }
        else {
            ++it; // 다음 원소로 이동
        }
    }
}
void CircleVectorManager::paint() {
    for (auto it = v.begin(); it != v.end(); it++) {
        UI::println((*it)->getName());
    }
    UI::println();
}
void CircleVectorManager::run() {
    UI::println("원을 삽입하고 삭제하는 프로그램입니다.");
    while (true) {
        int cmd = UI::getMainMenu();
        switch (cmd) {
        case EDIT:
            edit(); break;
        case REMOVE:
            remove(); break;
        case PAINT:
            paint(); break;
        case EXIT:
            return;
        default:
            UI::println("올바른 값을 입력해주세요");
        }
    }
}

int main() {
	CircleVectorManager cvm;
	cvm.run();
}