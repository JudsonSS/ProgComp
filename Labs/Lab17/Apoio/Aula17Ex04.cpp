#include <iostream>
using namespace std;

int main()
{
	cout << "Entre com cinco valores:\n";
	double numero;
	double soma = 0.0;
	for (int i = 1; i <= 5; i++)
	{
		cout << "Valor " << i << ": ";
		cin >> numero;
		soma += numero;   // soma = soma + numero;
	}
	cout << "A soma = " << soma << "\n";
	cout << "A media = " << soma / 5 << "\n";
	
	return 0;
}