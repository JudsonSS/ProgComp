#include <iostream>
using namespace std;

int main()
{
	const char * mes[12] = 
	{
		"Janeiro",
		"Fevereiro",
		"Marco",
		"Abril",
		"Maio",
		"Junho",
		"Julho",
		"Agosto",
		"Setembro",
		"Outubro",
		"Novembro",
		"Dezembro"
	};

	unsigned vendas[12];
	unsigned total = 0;

	cout << "Digite o numero de livros vendidos\n";

	for (int i=0; i < 12; i++)
	{
		cout << mes[i] << ": ";
		cin >> vendas[i];
		total += vendas[i];
	}

	cout << "Em um ano foram vendidos " << total << " livros.\n";
 
	return 0;
}