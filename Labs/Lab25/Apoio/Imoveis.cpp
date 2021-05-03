// Aplicação principal – gerenciando o valor de imóveis
#include <iostream>
using namespace std;

int lerVetor(double[], int);
void mostrarVetor(const double[], int);
void ajustarVetor(double, double[], int);

int main()
{
	const int Max = 5;
	double imoveis[Max];

	int tam = lerVetor(imoveis, Max);
	mostrarVetor(imoveis, tam);

	cout << "Digite o fator de ajuste: ";
	double ajuste;
	cin >> ajuste;
	ajustarVetor(ajuste, imoveis, tam);
	mostrarVetor(imoveis, tam);

	return 0;
}

// Lendo valores do teclado para um vetor
int lerVetor(double vet[], int tam)
{
	double temp;
	int i = 0;

	cout << "Digite valor #1: ";
	while (cin >> temp && i < tam && temp >= 0)
	{
		vet[i++] = temp;
		cout << "Digite valor #" << (i + 1) << ": ";
	}

	if (!cin)
	{
		cin.clear();
		while (cin.get() != '\n')
			continue;
		cout << "Entrada invalida. Leitura encerrada!\n";
	}

	return i;
}


// Mostrando o conteúdo de um vetor
void mostrarVetor(const double vet[], int tam)
{
	for (int i = 0; i < tam; ++i)
	{
		cout << "Imovel #" << (i + 1) << ": R$";
		cout << vet[i] << endl;
	}
}

// Reajusta valor de imóveis por um fator
void ajustarVetor(double fator, double vet[], int tam)
{
	for (int i = 0; i < tam; ++i)
		vet[i] *= fator;  // vet[i] = vet[i] * fator;
}
