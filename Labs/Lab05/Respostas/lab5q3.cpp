#include <iostream>
using namespace std;

double harmonica(double, double);

int main()
{
	double num1, num2;
	cout << "Entre com um numero: ";
	cin >> num1;
	cout << "Entre com outro numero: ";
	cin >> num2;

	cout << "A media harmonica dos numeros e " << harmonica(num1,num2) << endl;
	
	return 0;
}

double harmonica(double x, double y)
{
	return (2.0 * x * y) / (x + y);
}