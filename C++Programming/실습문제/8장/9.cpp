#include <iostream>
#include <string>
using namespace std;

class Console {
public:
    static int menuCmd;
    static int timeCmd;
    static string name;
    static int seatNum;

    static void menuSelect() {
        cout << endl << "예약:1, 취소:2, 보기:3, 끝내기:4>> ";
        cin >> menuCmd;
    }
    static void timeSelect() {
        cout << "07시:1, 12시:2, 17시:3>> ";
        cin >> timeCmd;
    }
    static void inputName() {
        cout << "이름 입력>> ";
        cin >> name;
    }
    static void inputSeatNum() {
        cout << "좌석 번호>> ";
        cin >> seatNum;
    }
    // 시간 선택의 유효성 검사를 위한 함수 추가
    static bool isValidTime() {
        return timeCmd >= 1 && timeCmd <= 3;
    }
};

// static 멤버 변수 정의
int Console::menuCmd = 0;
int Console::timeCmd = 0;
string Console::name = "";
int Console::seatNum = 0;

class Seat {
    string name;
public:
    Seat(string name = "___") : name(name) {}
    string getName() const { return name; }
    void setName(string name) { this->name = name; }
};

class Schedule {
    Seat seat[8];
    string time;
public:
    Schedule(string time = "") : time(time) {}

    void show() const {
        cout << time << ":";
        for (int i = 0; i < 8; i++)
            cout << "\t" << seat[i].getName();
        cout << endl;
    }

    bool set(int seatIndex, const string& name) {
        if (seatIndex < 0 || seatIndex >= 8) {
            cout << "잘못된 좌석 번호입니다." << endl;
            return false;
        }
        if (name == seat[seatIndex].getName()) {
            cout << "이미 예약이 된 좌석입니다." << endl;
            return false;
        }
        seat[seatIndex].setName(name);
        return true;
    }

    bool reSet(int seatIndex, const string& name) {
        if (seatIndex < 0 || seatIndex >= 8) {
            cout << "잘못된 좌석 번호입니다." << endl;
            return false;
        }
        if (name != seat[seatIndex].getName()) {
            cout << "잘못된 입력입니다." << endl;
            return false;
        }
        seat[seatIndex].setName("___");
        return true;
    }
};

class AirLineBook {
    string airName;
    Schedule sch[3];

    // 예약 처리를 위한 헬퍼 함수
    void processReservation() {
        if (!Console::isValidTime()) {
            cout << "잘못된 입력입니다." << endl;
            return;
        }

        int index = Console::timeCmd - 1;
        sch[index].show();
        Console::inputSeatNum();
        Console::inputName();
        sch[index].set(Console::seatNum - 1, Console::name);
    }

    // 취소 처리를 위한 헬퍼 함수
    void processCancellation() {
        if (!Console::isValidTime()) {
            cout << "잘못된 입력입니다." << endl;
            return;
        }

        int index = Console::timeCmd - 1;
        sch[index].show();
        Console::inputSeatNum();
        Console::inputName();
        sch[index].reSet(Console::seatNum - 1, Console::name);
    }

public:
    AirLineBook(string airName = "") : airName(airName) {
        sch[0] = Schedule("07시");
        sch[1] = Schedule("12시");
        sch[2] = Schedule("17시");
    }

    void run() {
        cout << "***** " << airName << "에 오신것을 환영합니다 *****" << endl;

        while (true) {
            Console::menuSelect();

            switch (Console::menuCmd) {
            case 1: // 예약
                Console::timeSelect();
                processReservation();
                break;

            case 2: // 취소
                Console::timeSelect();
                processCancellation();
                break;

            case 3: // 보기
                for (const auto& schedule : sch) {
                    schedule.show();
                }
                break;

            case 4: // 종료
                cout << "예약 시스템을 종료합니다.";
                return;

            default:
                cout << "잘못된 메뉴 선택입니다." << endl;
            }
        }
    }
};

int main() {
    AirLineBook airplane("한성항공");
    airplane.run();
}