#include <iostream>
#include "EvenRandom.h"
using namespace std;

int main()
{
    EvenRandom r;
    cout << "-- 0에서 " << RAND_MAX << "까지의 짝수 랜덤 정수 10 개--" << endl;
    for(int i=0; i<10; i++)
    {
        int n = r.next();
        cout << n << ' ';
    }
    cout << endl << endl << "-- 2에서 10까지의 짝수 랜덤 정수 10 개--" << endl;
    for(int i=0; i<10; i++)
    {
        int n = r.nextInRange(2, 10);
        cout << n << ' ';
    }
    cout << endl;
    return 0;
}