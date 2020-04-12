#include <iostream>
using namespace std;

double converTemp(double);

int main()
{
	cout << "Digite uma temperatura em graus Celsius: ";
	double celsius;
	cin >> celsius;

	double fahr;
	fahr = converTemp(celsius);
	cout << celsius << " graus Celsius equivalem a " << fahr << " graus Fahrenheit.\n";

	return 0;
}

double converTemp(double temp)
{
	return 1.8 * temp + 32.0;	
}