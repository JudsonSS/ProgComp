#include <iostream>
using namespace std;

int main()
{
	cout << "Entre com números para somar (0 para sair):\n";
	int num;
	int soma = 0;
	cin >> num;
	while (num != 0)
	{
		soma += num;   // soma = soma + num;
		cin >> num;
	}
	cout << "A soma é " << soma << "\n";
}