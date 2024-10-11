#include <iostream>
using namespace std;

class Color
{
	int red, green, blue;
public:
	Color(int r = 0, int g = 0, int b = 0) { red = r; green = g; blue = b; }
	void setColor(int r, int g, int b) { red = r; green = g; blue = b; }
	void show() { cout << red << ' ' << green << ' ' << blue << endl; }
	Color operator+(Color x)
	{
		Color temp;
		temp.red = this->red + x.red;
		temp.green = this->green + x.green;
		temp.blue = this->blue + x.blue;
		return temp;
	}
	bool operator==(Color x)
	{
		if (this->red == x.red && this->green == x.green && this->blue == x.blue)
			return true;
		return false;
	}
};

int main()
{
	Color red(255, 0, 0), blue(0, 0, 255), c;
	c = red + blue;
	c.show();

	Color fuchsia(255, 0, 255);
	if (c == fuchsia)
		cout << "보라색 맞음";
	else
		cout << "보라색 아님";
}