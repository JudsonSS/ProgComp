#include <iostream>
using namespace std;

struct Automovel
{
	char modelo[20];
	int ano;
	float preco;
};

int main()
{
	Automovel vet[10] =
	{
		{"Vectra", 2009, 58000},
		{"Polo", 2008, 45000}
	};

	// ponteiro recebe endereço do segundo carro
	Automovel * pt = &vet[1];

	cout << pt->modelo << " " << pt->ano << " " << pt->preco << endl;

	return 0;
}