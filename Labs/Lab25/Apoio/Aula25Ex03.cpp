// Parâmetros de funções com vetores
#include <iostream>
using namespace std;

int somaVetor(int vet[], int n);

int main()
{
	const int VetTam = 7;

	int vendas[VetTam] = { 0,2,0,4,1,3,0 };

	cout << "Endereco de vendas = " << vendas;
	cout << ", tamanho de vendas = " << sizeof vendas << endl << endl;

	cout << "Total de vendas " << somaVetor(vendas, VetTam) << endl;
	cout << "Tres primeiros  " << somaVetor(vendas, 3) << endl;
	cout << "Quatro ultimos  " << somaVetor(vendas + 3, 4) << endl;

	return 0;
}

int somaVetor(int vet[], int n)
{
	cout << "(vet = " << vet
		<< ", tamanho de vet = "
		<< sizeof vet << "): ";

	int soma = 0;
	for (int i = 0; i < n; i++)
		soma += vet[i];
	return soma;
}
