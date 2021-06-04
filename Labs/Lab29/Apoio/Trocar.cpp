#include <iostream>
using std::cout;
using std::endl;

template <typename T>
void trocar(T & a, T & b);

int main()
{
	int i = 10;
	int j = 20;
	double x = 24.5;
	double y = 81.7;

	cout << "valores originais:" << endl;
	cout << "i, j = " << i << ", " << j << endl;
	cout << "x, y = " << x << ", " << y << endl << endl;

	trocar(i, j);
	trocar(x, y);
	
	cout << "valores trocados:" << endl;
	cout << "i, j = " << i << ", " << j << endl;
	cout << "x, y = " << x << ", " << y << endl;
	cout << endl;

	return 0;
}

template <typename T>
void trocar(T & a, T & b)
{
	T temp;
	temp = a;
	a = b;
	b = temp;
}