#include <iostream>
using namespace std;

// 선언부
class Tower {
    private:
        int height;
    public:
        Tower();
        Tower(int num);
        int getHeight();
};

// 구현부
Tower::Tower() {
    height = 1;
}

Tower::Tower(int num) {
    height = num;
}

int Tower::getHeight() {
    return height;
}

// 메인함수
int main()
{
    Tower myTower;
    Tower seoulTower(100);
    cout << "높이는 " << myTower.getHeight() << "미터" << endl;
    cout << "높이는 " << seoulTower.getHeight() << "미터" << endl;
    return 0;
}