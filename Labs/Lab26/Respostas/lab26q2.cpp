#include <iostream>
using namespace std;

const char * Mes[4] = { "Marco", "Abril", "Junho", "Julho" };

struct Vector
{
	static const int Tam = 4; // static é necessário definir constantes em registros
	double dados[Tam];
};

void preencher(Vector * vet);
void mostrar(Vector vet);

int main()
{
	Vector gastos;
	preencher(&gastos);
	mostrar(gastos);

	return 0;
}

void preencher(Vector * vet)
{
	for (int i = 0; i < vet->Tam; i++)
	{
		cout << "Entre com o gasto de " << Mes[i] << ": ";
		cin >> vet->dados[i];
	}
}

void mostrar(Vector vet)
{
	double total = 0.0;
	cout << "\nGastos\n";
	for (int i = 0; i < vet.Tam; i++)
	{
		cout << Mes[i] << ": R$" << vet.dados[i] << endl;
		total += vet.dados[i];
	}
	cout << "Total de gastos: R$" << total << endl;
}

