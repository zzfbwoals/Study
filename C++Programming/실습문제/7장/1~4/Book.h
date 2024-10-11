#ifndef BOOK_H
#define BOOK_H

#include <iostream>
#include <string>
using namespace std;

class Book
{
	string title;
	int price, pages;
public:
	Book(string title = "", int price = 0, int pages = 0)
	{
		this->title = title; this->price = price; this->pages = pages;
	}
	void show()
	{
		cout << title << ' ' << price << "원 " << pages << " 페이지" << endl;
	}
	string getTitle() { return title; }
	// 문제1
	Book& operator+=(int n)
	{
		this->price += n;
		return *this;
	}
	Book& operator-=(int n)
	{
		this->price -= n;
		return *this;
	}
	// 문제2
	bool operator==(int n)
	{
		if (this->price == n) return true;
		return false;
	}
	bool operator==(string str)
	{
		if (this->title==str) return true;
		return false;
	}
	bool operator==(Book a)
	{
		if (this->title == a.title && this->price == a.price && this->pages == a.pages) return true;
		return false;
	}
	// 문제3
	bool operator!()
	{
		if (this->price == 0) return true;
		return false;
	}
	// 문제4
	friend bool operator<(string b, Book a);
};

#endif