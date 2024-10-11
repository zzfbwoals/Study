#include <iostream>
using namespace std;

class Matrix {
	int arr[4];
public:
	Matrix(int a = 0, int b = 0, int c = 0, int d = 0) { arr[0] = a; arr[1] = b; arr[2] = c; arr[3] = d; }
	void show()
	{
		cout << "Matrix = { " << arr[0] << ' ' << arr[1] << ' ' << arr[2] << ' ' << arr[3] << " }" << endl;
	}
	Matrix operator+(Matrix x)
	{
		Matrix temp;
		for (int i = 0; i < 4; i++)
			temp.arr[i] = this->arr[i] + x.arr[i];
		return temp;
	}
	Matrix& operator+=(Matrix x)
	{
		for (int i = 0; i < 4; i++)
			this->arr[i] += x.arr[i];
		return *this;
	}
	bool operator==(Matrix x)
	{
		if (this->arr[0] == x.arr[0] && this->arr[1] == x.arr[1] && this->arr[2] == x.arr[2] && this->arr[3] == x.arr[3])
			return true;
		return false;
	}
};

int main()
{
	Matrix a(1, 2, 3, 4), b(2, 3, 4, 5), c;
	c = a + b;
	a += b;
	a.show(); b.show(); c.show();
	if (a == c)
		cout << "a and c are the same" << endl;
}