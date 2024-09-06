#include <iostream>
using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;
    // 선언
    char **strArr = new char*[N];
    for(int i=0; i<N; i++)
    {
        strArr[i] = new char[M];
    }

    // 초기화
    for(int i=0; i<N; i++)
    {
        for(int j=0; j<M; j++)
        {
            cin >> strArr[i][j];
        }
    }

    

    // 메모리 해제
    for(int i = 0; i < N; i++)
    {
        delete[] strArr[i];
    }
    delete[] strArr;
    return 0;
}