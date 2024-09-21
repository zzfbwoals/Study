#include "Histogram.h"
#include <string>
#include <iostream>
using namespace std;

Histogram::Histogram(string text)
{
	this->text = text;
	firstText = this->text;
	count = 0;
	size = this->text.length();
	for (int i = 0; i < size; i++)
	{
		if (isalpha(this->text[i]))
		{
			count++;
			this->text[i] = tolower(this->text[i]);
			arr[this->text[i] - 'a']++;
		}
	}
}

void Histogram::put(string text)
{
	int preSize = size;
	size += text.length();
	this->text += text;
	firstText += text;
	for (int i = preSize; i < this->text.length(); i++)
	{
		if (isalpha(this->text[i]))
		{
			count++;
			this->text[i] = tolower(this->text[i]);
			arr[this->text[i] - 'a']++;
		}
	}
}

void Histogram::putc(char c)
{
	size++;
	this->text += c;
	firstText += c;
	if (isalpha(c))
	{
		count++;
		c = tolower(c); // 소문자로 변환
		arr[this->text[size] - 'a']++;
	}
}

void Histogram::print()
{
	cout << firstText << endl << endl;
	cout << "총 알파벳 수 " << count << endl << endl;

	for (int i = 0; i < 26; i++)
	{
		cout << (char)(i + 'a') << " (" << arr[i] << ")\t: ";
		for (int j = 0; j < arr[i]; j++)
			cout << "*";
		cout << endl;
	}
}