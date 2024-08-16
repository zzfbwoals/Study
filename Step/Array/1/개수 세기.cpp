#include <iostream>

using namespace std;

int main()
{
    int array[200] = {0};
    int N, v;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> array[i];
    }
    cin >> v;
    int count = 0;
    for (int i = 0; i < N; i++)
    {
        if (array[i] == v)
            count++;
    }
    cout << count << '\n';
    return 0;
}