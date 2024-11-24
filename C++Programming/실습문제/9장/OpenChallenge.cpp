#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
using namespace std;

// 게임 객체들의 기본 클래스
class GameObject {
protected:
    int distance;   // 한 번 이동할 때의 이동 거리
    int x, y;       // 현재 위치 좌표
public:
    // 생성자: 초기 위치와 이동거리 설정
    GameObject(int startX, int startY, int distance) {
        this->x = startX;
        this->y = startY;
        this->distance = distance;
    }

    virtual ~GameObject() {};              // 가상 소멸자
    virtual void move() = 0;              // 순수 가상 함수: 이동 로직 구현
    virtual char getShape() = 0;          // 순수 가상 함수: 객체의 모양 반환

    // 현재 위치 반환 함수
    int getX() { return x; }
    int getY() { return y; }

    // 다른 객체와의 충돌 검사
    bool collide(GameObject* p) {
        return (this->x == p->getX() && this->y == p->getY());
    }
};

// 사용자가 조종하는 Human 클래스
class Human : public GameObject {
public:
    Human(int startX, int startY, int distance) : GameObject(startX, startY, distance) {}

    // 키보드 입력에 따른 이동 구현
    void move() override {
        cout << "왼쪽(a), 아래(s), 위(d), 오른쪽(f) >> ";
        char cmd;
        cin >> cmd;

        // 경계 검사 및 이동 처리
        switch (cmd) {
        case 'a':   // 왼쪽
            if (y == 0) {
                cout << "이동할 수 없습니다." << endl;
                return;
            }
            y -= distance;
            break;
        case 's':   // 아래
            if (x == 9) {
                cout << "이동할 수 없습니다." << endl;
                return;
            }
            x += distance;
            break;
        case 'd':   // 위
            if (x == 0) {
                cout << "이동할 수 없습니다." << endl;
                return;
            }
            x -= distance;
            break;
        case 'f':   // 오른쪽
            if (y == 19) {
                cout << "이동할 수 없습니다." << endl;
                return;
            }
            y += distance;
            break;
        default:
            cout << "올바른 값을 입력해주세요" << endl;
        }
    }

    char getShape() override { return 'H'; }
};

// 랜덤하게 움직이는 Monster 클래스
class Monster : public GameObject {
public:
    Monster(int startX, int startY, int distance) : GameObject(startX, startY, distance) {}

    // 랜덤한 방향으로 이동
    void move() override {
        int cmd;
        do {
            cmd = rand() % 4;  // 0: 왼쪽, 1: 아래, 2: 위, 3: 오른쪽
        } while ((cmd == 0 && y - distance < 0) ||    // 왼쪽 경계 검사
            (cmd == 1 && x + distance > 9) ||    // 아래쪽 경계 검사
            (cmd == 2 && x - distance < 0) ||    // 위쪽 경계 검사
            (cmd == 3 && y + distance > 19));    // 오른쪽 경계 검사

        // 선택된 방향으로 이동
        if (cmd == 0) y -= distance;
        else if (cmd == 1) x += distance;
        else if (cmd == 2) x -= distance;
        else if (cmd == 3) y += distance;
    }

    char getShape() override { return 'M'; }
};

// 일정 주기로 움직이는 Food 클래스
class Food : public GameObject {
    int count;  // 이동 타이밍을 제어하는 카운터
public:
    Food(int startX, int startY, int distance) : GameObject(startX, startY, distance) {
        this->count = 0;
    }

    // 3턴 대기 후 이동 시작, 5번 이동 후 다시 대기
    void move() override {
        if (count < 3) {  // 처음 3턴은 대기
            count++;
            return;
        }

        int cmd;
        do {
            cmd = rand() % 4;  // 0: 왼쪽, 1: 아래, 2: 위, 3: 오른쪽
        } while ((cmd == 0 && y == 0) ||    // 왼쪽 경계 검사
            (cmd == 1 && x == 9) ||    // 아래쪽 경계 검사
            (cmd == 2 && x == 0) ||    // 위쪽 경계 검사
            (cmd == 3 && y == 19));    // 오른쪽 경계 검사

        // 선택된 방향으로 이동 및 카운트 증가
        if (cmd == 0) y -= distance;
        else if (cmd == 1) x += distance;
        else if (cmd == 2) x -= distance;
        else if (cmd == 3) y += distance;

        count++;
        if (count > 5) count = 0;  // 5번 이동 후 카운트 리셋
    }

    char getShape() override { return '@'; }
};

// 게임 진행을 관리하는 Game 클래스
class Game {
    char field[10][20];  // 게임 필드
    Human* human;        // 플레이어 객체
    Monster* monster;    // 몬스터 객체
    Food* food;         // 음식 객체

public:
    // 게임 초기화
    Game() {
        // 필드 초기화
        for (int i = 0; i < 10; i++)
            for (int j = 0; j < 20; j++)
                field[i][j] = '-';

        // 게임 객체 생성 및 배치
        human = new Human(0, 0, 1);
        monster = new Monster(5, 5, 2);
        food = new Food(8, 8, 1);

        // 초기 위치에 객체 표시
        field[human->getX()][human->getY()] = human->getShape();
        field[monster->getX()][monster->getY()] = monster->getShape();
        field[food->getX()][food->getY()] = food->getShape();
    }

    // 소멸자: 동적 할당된 객체들 정리
    ~Game() {
        delete human;
        delete monster;
        delete food;
    }

    // 랜덤 시드 초기화
    void seed() {
        srand((unsigned)time(0));
    }

    // 현재 게임 필드 출력
    void show() {
        cout << endl;
        for (int i = 0; i < 10; i++) {
            for (int j = 0; j < 20; j++)
                cout << field[i][j];
            cout << endl;
        }
    }

    // 게임 실행
    void run() {
        cout << "** Human의 Food 먹기 게임을 시작합니다. **" << endl;

        while (true) {
            show();  // 현재 상태 출력

            // 이전 위치 지우기
            field[human->getX()][human->getY()] = '-';
            field[monster->getX()][monster->getY()] = '-';
            field[food->getX()][food->getY()] = '-';

            // 각 객체 이동
            human->move();
            monster->move();
            food->move();

            // 충돌 검사
            if (human->collide(monster)) {
                // 최종 상태 표시 후 게임 오버
                field[monster->getX()][monster->getY()] = monster->getShape();
                field[food->getX()][food->getY()] = food->getShape();
                show();
                cout << "Human is Loser!!" << endl;
                break;
            }
            else if (human->collide(food)) {
                // 최종 상태 표시 후 승리
                field[human->getX()][human->getY()] = human->getShape();
                field[monster->getX()][monster->getY()] = monster->getShape();
                show();
                cout << "Human is winner!!" << endl;
                break;
            }

            // 새로운 위치에 객체 표시
            field[human->getX()][human->getY()] = human->getShape();
            field[monster->getX()][monster->getY()] = monster->getShape();
            field[food->getX()][food->getY()] = food->getShape();
        }
    }
};

int main() {
    Game game;     // 게임 객체 생성
    game.seed();   // 랜덤 시드 초기화
    game.run();    // 게임 시작

    return 0;
}