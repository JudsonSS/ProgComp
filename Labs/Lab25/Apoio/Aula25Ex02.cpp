// Funções recebendo argumentos tipo vetor
#include <iostream>
using namespace std;

int somaVetor(int vet[], int n);

int main()
{
	const int VetTam = 7;
	int vendas[VetTam] = { 0,2,0,4,1,3,0 };
	int total = somaVetor(vendas, VetTam);
	cout << "Total de vendas: " << total << "\n";
	return 0;
}

int somaVetor(int vet[], int n)
{
	int soma = 0;
	for (int i = 0; i < n; ++i)
		soma = soma + vet[i];
	return soma;
}
