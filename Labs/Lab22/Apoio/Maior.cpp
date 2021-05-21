#include <iostream>
using namespace std;

int main()
{
	cout << "Entre com dois inteiros: ";
	int a, b;
	cin >> a >> b;

	cout << "O maior entre " << a << " e " << b;
	int maior = a > b ? a : b;
	cout << " = " << maior << endl;

	return 0;
}