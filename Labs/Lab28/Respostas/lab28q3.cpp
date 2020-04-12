#include <iostream>
using namespace std;

struct caixa
{
	char marca[40];
	float altura;
	float largura;
	float comprimento;
	float volume;
};

void imprimir(const caixa * pcx);
void volume(caixa * pcx);

int main()
{
	caixa leite = { "Prepak", 0.25f, 0.15f, 0.1f };
	imprimir(&leite);
	volume(&leite);
	imprimir(&leite);

	return 0;
}

void imprimir(const caixa * pcx)
{
	cout << pcx->marca << ": "
		<< pcx->altura << " x "
		<< pcx->largura << " x "
		<< pcx->comprimento << ", volume = "
		<< pcx->volume << "\n";
}

void volume(caixa * pcx)
{
	pcx->volume = pcx->altura * pcx->largura * pcx->comprimento;
}