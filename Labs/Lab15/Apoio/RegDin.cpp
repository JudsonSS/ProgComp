#include <iostream>
using namespace std;

struct jogador
{
	char nome[40];
	float salario;
	unsigned gols;
};

int main()
{
	jogador * pj = new jogador;
	cout << "Digite nome, salário e gols do jogador: ";
	cin >> pj->nome >> pj->salario >> pj->gols;

	cout << "Contratacao para o proximo ano:\n" << pj->nome << " por " << pj->salario << " Reais\n";
	delete pj;

	return 0;
}