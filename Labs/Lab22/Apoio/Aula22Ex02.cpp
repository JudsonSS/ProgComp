#include <iostream>
using namespace std;

int main()
{
	cout << "Entre com dois inteiros: ";
	int a, b;
	cin >> a >> b;

	cout << "O maior entre " << a << " e " << b;
	int c = a > b ? a : b;
	cout << " = " << c << endl;

	return 0;
}