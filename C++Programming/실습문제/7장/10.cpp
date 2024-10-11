#include <iostream>
using namespace std;

class Statistics
{
    int* arr;
    int size;
    int capacity;

    void resize(int new_capacity)
    {
        int* new_arr = new int[new_capacity];
        for (int i = 0; i < size; i++)
        {
            new_arr[i] = arr[i];
        }
        delete[] arr;
        arr = new_arr;
        capacity = new_capacity;
    }

public:
    Statistics() : arr(nullptr), size(0), capacity(1)
    {
        arr = new int[capacity];
    }

    ~Statistics()
    {
        delete[] arr;
    }

    bool operator!()
    {
        return size == 0;
    }

    Statistics& operator<<(int n)
    {
        if (size == capacity)
        {
            resize(capacity * 2);
        }
        arr[size++] = n;
        return *this;
    }

    void operator~()
    {
        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << ' ';
        }
        cout << endl;
    }

    int& operator>>(int& avg)
    {
        int sum = 0;
        for (int i = 0; i < size; i++)
        {
            sum += arr[i];
        }
        avg = sum / size;
        return avg;
    }
};

int main()
{
    Statistics stat;
    if (!stat) cout << "현재 통계 데이터가 없습니다." << endl;

    int x[5];
    cout << "5 개의 정수를 입력하라>>";
    for (int i = 0; i < 5; i++) cin >> x[i]; // x[i]에 정수 입력

    for (int i = 0; i < 5; i++) stat << x[i]; // x[i] 값을 통계 객체에 삽입한다.
    stat << 100 << 200; // 100, 200을 통계 객체에 삽입한다.
    ~stat; // 통계 데이터를 모두 출력한다.

    int avg;
    stat >> avg; // 통계 객체로부터 평균을 받는다.
    cout << "avg=" << avg << endl; // 평균을 출력한다.
}
