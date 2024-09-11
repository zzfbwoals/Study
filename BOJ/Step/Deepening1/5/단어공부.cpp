#include <iostream>
#include <cstring> // strlen 함수를 사용하기 위해 추가
#include <cctype>  // tolower 함수를 사용하기 위해 추가

using namespace std;

int main()
{
    char str[1000001];
    cin >> str;
    int arr[26] = {0};

    // 문자열을 소문자로 변환하고 빈도수 계산
    for (int i = 0; str[i] != '\0'; i++)
    {
        str[i] = tolower(str[i]); // 소문자로 변환
        arr[str[i] - 'a']++;
    }

    int max = arr[0];
    int max_index = 0;
    for (int i = 1; i < 26; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
            max_index = i;
        }
    }

    for (int i = 0; i < 26; i++)
    {
        if (i != max_index && arr[i] == max)
        {
            cout << "?" << endl;
            return 0;
        }
    }

    cout << (char)(max_index + 'A') << endl; // 대문자로 출력
    return 0;
}