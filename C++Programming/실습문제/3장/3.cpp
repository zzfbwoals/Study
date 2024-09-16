#include <iostream>
using namespace std;

class Account
{
    private:
        string name;
        int id;
        int money;
    public:
        Account(string x, int y, int z) {name = x, id = y, money = z;}
        void deposit(int num) {money += num;}
        int withdraw(int num) {money -= num; return money;}
        string getOwner() {return name;}
        int inquiry() {return money;}
};

int main()
{
    Account a("kitae", 1, 5000);
    a.deposit(50000);
    cout << a.getOwner() << "ÀÇ ÀÜ¾×Àº " << a.inquiry() << endl;
    int money = a.withdraw(20000);
    cout << a.getOwner() << "ÀÇ ÀÜ¾×Àº " << a.inquiry() << endl;
    return 0;
}