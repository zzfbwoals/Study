#include <iostream>
#include <cstring> // strlen 함수를 사용하기 위해 추가

using namespace std;

int main()
{
    int N;
    cin >> N; // 단어의 개수를 입력받음
    int group_word_count = 0; // 그룹 단어의 개수를 저장할 변수

    for (int i = 0; i < N; i++)
    {
        char str[101];
        cin >> str; // 단어를 입력받음
        int str_len = strlen(str); // 단어의 길이를 계산
        bool is_group_word = true; // 그룹 단어인지 여부를 저장할 변수
        bool visited[26] = {false}; // 알파벳의 방문 여부를 저장할 배열

        for (int j = 0; j < str_len; j++)
        {
            if (visited[str[j] - 'a']) // 현재 문자가 이전에 등장했는지 확인
            {
                if (str[j] != str[j - 1]) // 이전에 등장했지만 연속되지 않은 경우
                {
                    is_group_word = false; // 그룹 단어가 아님
                    break; // 더 이상 검사할 필요 없음
                }
            }
            else
            {
                visited[str[j] - 'a'] = true; // 현재 문자를 방문했음을 표시
            }
        }

        if (is_group_word) // 그룹 단어인 경우
        {
            group_word_count++; // 그룹 단어의 개수를 증가
        }
    }

    cout << group_word_count << endl; // 그룹 단어의 개수를 출력
    return 0;
}