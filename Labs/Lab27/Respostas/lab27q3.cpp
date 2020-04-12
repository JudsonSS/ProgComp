#include <iostream>
using namespace std;

double calcular(double a, double b, double(*f) (double, double));
double soma(double x, double y);
double subt(double x, double y);
double mult(double x, double y);

int main()
{
	const int VetTam = 3;
	const char * func[VetTam] = { "Soma", "Subt", "Mult" };
	double(*vet[VetTam]) (double, double) = { soma, subt, mult };
	
	cout << "Digite pares de valores:\n";
	double val1, val2;

	while (cin >> val1 >> val2)
	{
		for (int i = 0; i < VetTam; ++i)
			cout << func[i] << ": " << calcular(val1, val2, vet[i]) << endl;
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

double subt(double x, double y)
{
	return x - y;
}

double mult(double x, double y)
{
	return x * y;
}

