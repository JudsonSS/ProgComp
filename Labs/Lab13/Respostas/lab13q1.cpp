#include <iostream>
using namespace std;

union CorAuto
{
	char nome[10];
	int num;
	char codigo[5];
};

struct Automovel
{
	char modelo[15];
	unsigned ano;
	CorAuto cor;
	float preco;
};

int main()
{
	Automovel garagem[10] = 
	{
		{"Vectra", 2009, "Azul", 58000},
		{"Polo", 2008, "Preto", 45000}
	};

	// entrada de dados do usuario
	cout << "Digite os dados do carro\n";
	cout << "Modelo: ";
	cin >> garagem[2].modelo;
	cout << "Ano: ";
	cin >> garagem[2].ano;
	cout << "Cor (codigo): ";
	cin >> garagem[2].cor.codigo;
	cout << "Preco: ";
	cin >> garagem[2].preco;

	// impressao dos valores do vetor
	cout << "\nCarros em Estoque\n";
	cout << "-----------------\n";
	cout << garagem[0].modelo << "\t";
	cout << garagem[0].ano << "\t";
	cout << garagem[0].cor.nome << "\t";
	cout << garagem[0].preco << endl;

	cout << garagem[1].modelo << "\t";
	cout << garagem[1].ano << "\t";
	cout << garagem[1].cor.nome << "\t";
	cout << garagem[1].preco << endl;

	cout << garagem[2].modelo << "\t";
	cout << garagem[2].ano << "\t";
	cout << garagem[2].cor.codigo << "\t";
	cout << garagem[2].preco << endl;

	return 0;
}