#include <iostream>
using namespace std;

double calcular(double a, double b, double(*f) (double, double));
double soma(double x, double y);
double mult(double x, double y);

int main()
{
	cout << "Digite pares de valores:\n";
	double val1, val2;
	
	while (cin >> val1 >> val2)
	{
		cout << "Soma: " << calcular(val1, val2, soma) << endl;
		cout << "Mult: " << calcular(val1, val2, mult) << endl;
	}

	return 0;
}

double calcular(double a, double b, double(*f)(double, double))
{
	return f(a, b);
}

double soma(double x, double y)
{
	return x + y;
}

double mult(double x, double y)
{
	return x * y;
}
