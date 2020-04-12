#include <iostream>
using namespace std;

int main()
{
	long a = 2009032809;
	float b = a;
	double c = a;

	cout << "valor long: " << a << endl;
	cout << endl;
	
	cout << "Mostrando em formato cientifico:" << endl;
	cout << "valor float: " << b << endl;
	cout << "valor double: " << c << endl;
	cout << endl;
	
	cout << "Mostrando no formato decimal:" << endl;
	cout << fixed;
	cout.precision(0);
	cout << "valor float: " << b << endl;
	cout << "valor double: " << c << endl;

	return 0;
}
