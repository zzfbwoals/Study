#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char str[1000001];
    scanf("%s", str);
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
            printf("?\n");
            return 0;
        }
    }

    printf("%c\n", (char)(max_index + 'A')); // 대문자로 출력
    return 0;
}