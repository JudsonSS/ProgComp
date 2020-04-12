// Funções recebendo faixa de elementos do vetor
#include <iostream>
using namespace std;

int somaVetor(const int * inicio, const int * fim);

int main()
{
	const int VetTam = 8;
	int potencias[VetTam] = { 1,2,4,8,16,32,64,128 };

	int total = somaVetor(potencias, potencias + VetTam);
	cout << "Soma das potencias de dois: " << total << "\n";

	total = somaVetor(potencias, potencias + 3);
	cout << "As tres primeiras somam " << total << "\n";

	total = somaVetor(potencias + 4, potencias + 8);
	cout << "As quatro ultimas somam " << total << "\n";

	return 0;
}

// retorna a soma dos valores do vetor
int somaVetor(const int * inicio, const int * fim)
{
	const int * pt;
	int soma = 0;

	for (pt = inicio; pt != fim; ++pt)
		soma = soma + *pt;

	return soma;
}

