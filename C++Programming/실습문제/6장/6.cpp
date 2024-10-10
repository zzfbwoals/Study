#include <iostream>
using namespace std;

class ArrayUtility2
{
public:
    static int* concat(int s1[], int s2[], int size);
    static int* remove(int s1[], int s2[], int size, int& retSize);
};

int* ArrayUtility2::concat(int s1[], int s2[], int size)
{
    int *arr = new int[size];
    for(int i=0; i<size; i++)
    {
        if(i<5)
            arr[i] = s1[i];
        else
            arr[i] = s2[i-5];
    }
    return arr;
}

int* ArrayUtility2::remove(int s1[], int s2[], int size, int& retSize)
{
    bool check = false;
    int *arr = new int[size];
    for(int i=0; i<size; i++)
    {
        for(int j=0; j<size; j++)
        {
            if(s1[i]==s2[j])
                check=true;
        }
        if(!check)
        {
            arr[i]=s1[i];
            retSize++;
        }
    }
    return arr;
}

int main()
{
    int *x = new int[5];
    int *y = new int[5];
    cout << "정수를 5 개 입력하라. 배열 x에 삽입한다>>";
    for(int i=0; i<5; i++)
        cin >> x[i];
    cout << "정수를 5 개 입력하라. 배열 y에 삽입한다>>";
    for(int i=0; i<5; i++)
        cin >> y[i];

    cout << "합친 정수 배열을 출력한다" << endl;
    int *arr = ArrayUtility2::concat(x, y, 10);
    for(int i=0; i<10; i++)
        cout << arr[i] << ' ';
    cout << endl;

    int retSize=0;
    arr = ArrayUtility2::remove(x, y, 5, retSize);
    cout << "배열 x[]에서 y[]을 뺀 결과를 출력한다. 개수는 " << retSize << endl;
    for(int i=0; i<retSize; i++)
        cout << arr[i] << ' ';
    cout << endl;
    
    delete[]x;
    delete[]y;
    return 0;
}