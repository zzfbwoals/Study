#include <iostream>

using namespace std;

int main()
{
    int row, col;
    cin >> row >> col;

    // 동적할당
    int **A = new int*[row];
    int **B = new int*[row];
    for(int i=0; i<row; i++)
    {
        A[i] = new int[col];
        B[i] = new int[col];
    }

    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            cin >> A[i][j];
        }
    }
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            cin >> B[i][j];
        }
    }

    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            cout << A[i][j]+B[i][j] << " ";
        }
        cout << endl;
    }

    // 동적해제
    for(int i=0; i<row; i++)
    {
	    delete[] A[i];
        delete[] B[i];
    }
    delete[] A;
    delete[] B;
    
    return 0;
}