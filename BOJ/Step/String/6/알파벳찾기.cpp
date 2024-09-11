#include <iostream>

using namespace std;

int main()
{
    char S[101];
    int arr[26];
    // memset(arr, -1, sizeof(arr));
    for (int i=0; i<26; i++)
    {
        arr[i] = -1;
    }
    cin >> S;
    for (int i=0; S[i] != '\0'; i++)
    {
        if (arr[S[i] - 'a'] == -1)
            arr[S[i] - 'a'] = i;
    }
    for (int i=0; i<26; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}