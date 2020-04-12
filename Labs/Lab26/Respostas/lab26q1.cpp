#include <iostream>
using namespace std;

const char * Mes[4] = { "Marco", "Abril", "Junho", "Julho" };

void preencher(double vet[], int tam);
void mostrar(const double vet[], int tam);

int main()
{
	const int VetTam = 4;
	double gastos[VetTam];
	preencher(gastos, VetTam);
	mostrar(gastos, VetTam);

	return 0;
}

void preencher(double vet[], int tam)
{
	for (int i = 0; i < tam; i++)
	{
		cout << "Entre com o gasto de " << Mes[i] << ": ";
		cin >> vet[i];
	}
}

void mostrar(const double vet[], int tam)
{
	double total = 0.0;
	cout << "\nGastos\n";
	for (int i = 0; i < tam; i++)
	{
		cout << Mes[i] << ": R$" << vet[i] << endl;
		total += vet[i];
	}
	cout << "Total de gastos: R$" << total << endl;
}

