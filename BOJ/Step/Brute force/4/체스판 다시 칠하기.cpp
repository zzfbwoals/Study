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

    int x=8, y=8, count=0;
    while(x<=N && y<=M)
    {
        for(int i=x-8; i<x; i++)
        {
            if(i>N) // N보다 크면
                continue;
            for(int j=y-8; j<y; j++)
            {
                if(j>M) // M보다 크면
                    continue;
                // B로 시작할 경우
                if(strArr[i][j]=='B')
                {
                    
                }
                // W로 시작할 경우
                else if(strArr[i][j]=='W')
                {

                }
            }
        }    
        x++;
        y++;
    }

    // 메모리 해제
    for(int i = 0; i < N; i++)
    {
        delete[] strArr[i];
    }
    delete[] strArr;
    return 0;
}