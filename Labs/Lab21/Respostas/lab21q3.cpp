#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cctype>
using namespace std;

int main()
{
	char nome[40];
	float valor;
	
	float total = 0;
	char mais_caro[40];
	float maior_valor = 0;
	unsigned alto_custo = 0;
	char continuar;

	cout << "Loja de Informática\n";
	do
	{
		cout << "-------------------\n";
		cout << "Produto: ";
		cin >> nome;
		cout << "Preco: ";
		cin >> valor;
		total += valor;
		
		// conta quantos custam mais de R$1000
		if (valor > 1000)
			++alto_custo;

		// guarda o maior valor
		if (valor > maior_valor)
		{
			maior_valor = valor;
			strcpy(mais_caro, nome);
		}

		cout << "-------------------\n";
		cout << "Deseja continuar [S/N]? ";
		cin >> continuar;
		cout << endl;

	} while (tolower(continuar) == 's');

	cout << "Total da compra: R$" << total << endl;
	cout << alto_custo << " produtos custam mais de R$1000." << endl;
	cout << mais_caro << " é o produto mais caro." << endl;

	return 0;
}