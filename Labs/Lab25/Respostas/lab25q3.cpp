#include <iostream>
using namespace std;

double * preencher(double * ini, double * fim);
void mostrar(const double * ini, const double * fim);
void inverter(double * ini, double * fim);

int main()
{
	double valores[10];

	double * limite = preencher(valores, valores+10);
	mostrar(valores, limite);

	inverter(valores, limite);
	mostrar(valores, limite);

	inverter(valores + 1, limite - 1);
	mostrar(valores, limite);

	return 0;
}

// preenche vetor até o seu limite ou encontrar um erro na leitura
double * preencher(double * ini, double * fim)
{
	cout << "Entre com ate " << fim - ini << " valores:\n";

	double val;
	while (ini != fim && cin >> val)
	{
		*ini = val;
		++ini;
	}
	return ini;
}

// mostra elementos do vetor na tela
void mostrar(const double * ini, const double * fim)
{
	for (; ini != fim; ++ini)
		cout << *ini << " ";
	cout << endl;
}

// inverte elementos dentro do vetor
void inverter(double * ini, double * fim)
{
	while (ini < fim)
	{
		double temp = *ini;
		*(ini++) = *(--fim);
		*fim = temp;
	}
}
