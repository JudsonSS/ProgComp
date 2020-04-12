#include <iostream>
using namespace std;

int preencher(double vet[], int tam);
void mostrar(const double vet[], int tam);
void inverter(double vet[], int tam);

int main()
{
	double valores[10];

	int tamanho = preencher(valores, 10);
	mostrar(valores, tamanho);
	
	inverter(valores, tamanho);
	mostrar(valores, tamanho);
	
	inverter(valores+1, tamanho-2);
	mostrar(valores, tamanho);

	return 0;
}

// preenche vetor até o seu limite ou encontrar um erro na leitura
int preencher(double vet[], int tam)
{
	cout << "Entre com ate " << tam << " valores:\n";
	
	double val;
	int i = 0;
	while (i < tam && cin >> val)
		vet[i++] = val;
	return i;
}

// mostra elementos do vetor na tela
void mostrar(const double vet[], int tam)
{
	for (int i = 0; i < tam; ++i)
		cout << vet[i] << " ";
	cout << endl;
}

// inverte elementos dentro do vetor
void inverter(double vet[], int tam)
{
	for (int i = 0, j = tam - 1; i < j; ++i, --j)
	{
		double temp = vet[i];
		vet[i] = vet[j];
		vet[j] = temp;
	}
}
