#include <iostream>
using namespace std;

class Circle {
    int radius;
public:
    Circle(int r) : radius(r) {} // 생성자 초기화 리스트 사용
    int getRadius() const { return radius; } // const 멤버 함수
    void setRadius(int r) { radius = r; }
    void show() { cout << "반지름이 " << radius << "인 원" << endl; } // const 멤버 함수
};

void increaseBy(Circle& a, Circle& b) { // const 참조 사용
    int r = a.getRadius() + b.getRadius();
    a.setRadius(r);
}

int main() {
    Circle x(10), y(5);
    increaseBy(x, y);
    x.show();
    return 0;
}