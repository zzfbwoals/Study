#include <iostream>
#include <string>
#include <cstring>
using namespace std;

class Book
{
    string title; //char *title;
    int price;
public:
    Book(string title, int price); //Book(const char* title, int price);
    //Book(const Book& b);
    //~Book() { delete[] title; }
    void set(string title, int price); //void set(char* title, int price);
    void show() { cout << title << ' ' << price << "원" << endl; }
};
/*
Book::Book(const Book& b)
{
    int len = strlen(title) + 1;
    this->title = new char[len];
    strcpy(this->title, title);
    this->price = price;
}
*/
Book::Book(string title, int price) //Book::Book(const char* title, int price)
{
    /*
    int len = strlen(title) + 1;
    this->title = new char[len];
    strcpy(this->title, title);
    this->price = price;
    */
   this->title=title;
   this->price=price;
}

void Book::set(string title, int price) //void Book::set(char* title, int price)
{
    /*
    delete[] this->title;
    int len = strlen(title) + 1;
    this->title = new char[len];
    strcpy(this->title, title);
    this->price = price;
    */
    this->title=title;
    this->price=price;
}

int main()
{
    Book cpp("명품C++", 10000);
    Book java = cpp;
    java.set("명품자바", 12000);
    cpp.show();
    java.show();
    return 0;
}