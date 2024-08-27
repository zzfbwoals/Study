#include <iostream>

using namespace std;

int main()
{
    int maxRow=-1, maxCol=-1, max=-1; // 모든 값이 0일 경우 제대로 출력값이 나오지 않기 때문에 -1로 초기화
    int **arr = new int*[9];
    for(int i=0; i<9; i++)
        arr[i] = new int[9];
    
    for(int i=0; i<9; i++)
    {
        for(int j=0; j<9; j++)
            cin >> arr[i][j];
    }

    for(int i=0; i<9; i++)
    {
        for(int j=0; j<9; j++)
        {
            if(max<arr[i][j])
            {
                max = arr[i][j];
                maxRow = i+1;
                maxCol = j+1;
            }

        }
    }

    cout << max << endl << maxRow << " " << maxCol;

    for(int i=0; i<9; i++)
        delete[] arr[i];
    delete[] arr;
    return 0;
}