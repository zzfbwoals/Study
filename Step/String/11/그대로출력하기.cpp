#include <iostream>
#include <string>

using namespace std;

int main()
{
    string line;
    int line_count = 0;

    // 최대 100줄 입력받기
    while (line_count < 100 && getline(cin, line))
    {
        cout << line << endl;
        line_count++;
    }

    return 0;
}