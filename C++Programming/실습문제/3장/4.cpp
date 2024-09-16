#include <iostream>
using namespace std;

class CoffeeMachine
{
    private:
        int coffee;
        int water;
        int sugar;
    public:
        CoffeeMachine(int x, int y, int z) {coffee = x, water = y, sugar = z;}
        void show();
        void fill();
        void drinkEspresso();
        void drinkAmericano();
        void drinkSugarCoffee();
};

int main()
{
    CoffeeMachine java(5, 10, 3);
    java.drinkEspresso();
    java.show();
    java.drinkAmericano();
    java.show();
    java.drinkSugarCoffee();
    java.show();
    java.fill();
    java.show();
    return 0;
}