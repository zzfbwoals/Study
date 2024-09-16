#include <iostream>
#include <sstream>
using namespace std;

class Date {
    private:
        int year, month, day;
    public:
        Date(int x, int y, int z);
        Date(string s);
        void show();
        int getYear() { return year; }
        int getMonth() { return month; }
        int getDay() { return day; }
};

Date::Date(int x, int y, int z) {
    year = x;
    month = y;
    day = z;
}

Date::Date(string s) {
    istringstream iss(s);
    string tmp;
    for (int i = 0; i < 3; i++) {
        getline(iss, tmp, '/');
        if (i == 0)
            year = stoi(tmp);
        else if (i == 1)
            month = stoi(tmp);
        else
            day = stoi(tmp);
    }
}

void Date::show() {
    cout << year << "³â" << month << "¿ù" << day << "ÀÏ" << endl;
}

int main() {
    Date birth(2014, 3, 20);
    Date independenceDay("1945/8/15");
    independenceDay.show();
    cout << birth.getYear() << ',' << birth.getMonth() << ',' << birth.getDay() << endl;
    return 0;
}