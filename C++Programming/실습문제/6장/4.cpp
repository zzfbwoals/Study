#include <iostream>
using namespace std;

class MyVector{
    int *mem;
    int size;
public:
    MyVector(int n=100, int val=0);
    ~MyVector() {delete[] mem;}
    void print() {for(int i=0; i<size; i++) cout << mem[i] << ' ';}
};

MyVector::MyVector(int n, int val) {
    mem = new int[n];
    size = n;
    for(int i=0; i<size; i++) mem[i] = val;
}

int main()
{
    MyVector a;
    MyVector b(50, 1);
    a.print();
    cout << endl;
    b.print();
    return 0;
}