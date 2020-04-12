#include <iostream>
using namespace std;

struct Automovel
{
	char modelo[20];
	int ano;
	float preco;
};

void ImprimirTotal(Automovel * autos);

int main()
{
	Automovel * ptvet = new Automovel[10];
	
	cout << "Carro #1\n";
	cout << "Modelo: ";
	cin >> ptvet[0].modelo;
	cout << "Ano: ";
	cin >> ptvet[0].ano;
	cout << "Preco: ";
	cin >> ptvet[0].preco;

	cout << "Carro #2\n";
	cout << "Modelo: ";
	cin >> ptvet[1].modelo;
	cout << "Ano: ";
	cin >> ptvet[1].ano;
	cout << "Preco: ";
	cin >> ptvet[1].preco;

	cout << "\nO preco total dos carros: ";
	ImprimirTotal(ptvet);

	delete [] ptvet;
	return 0;
}

void ImprimirTotal(Automovel * autos)
{
	cout << autos[0].preco + autos[1].preco << endl;
}