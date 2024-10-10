#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class UpAndDownGame
{
public:
    static int min;
    static int max;
    static void seed() { srand((unsigned)time(0)); }
    static int nextInt() { return rand() % (max - min + 1) + min; }
    static void set(int a, int b)
    {
        if (a < b)
        {
            min = a;
            max = b;
        }
        else
        {
            min = b;
            max = a;
        }
    }
};

int UpAndDownGame::min = 0;
int UpAndDownGame::max = 99;

int main()
{
    UpAndDownGame::seed();
    int target = UpAndDownGame::nextInt();
    cout << "Up & Down 게임을 시작합니다." << endl;
    int cnt = 0;
    while (true)
    {
        int guess;
        cout << "답은 " << UpAndDownGame::min << "과 " << UpAndDownGame::max << "사이에 있습니다." << endl;
        if (cnt == 0)
        {
            cout << "김인수>>";
            cin >> guess;
            if (guess == target)
            {
                cout << "김인수가 이겼습니다!!" << endl;
                break;
            }
            else if (guess < target)
                UpAndDownGame::set(guess, UpAndDownGame::max);
            else
                UpAndDownGame::set(UpAndDownGame::min, guess);
        }
        else if (cnt == 1)
        {
            cout << "오은경>>";
            cin >> guess;
            if (guess == target)
            {
                cout << "오은경이 이겼습니다!!" << endl;
                break;
            }
            else if (guess < target)
                UpAndDownGame::set(guess, UpAndDownGame::max);
            else
                UpAndDownGame::set(UpAndDownGame::min, guess);
        }
        cnt++;
        if (cnt >= 2)
            cnt = 0;
    }
    return 0;
}