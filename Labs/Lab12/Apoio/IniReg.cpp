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
	jogador a = { "Bebeto", 200000, 600 };
	jogador b = { "Romário", 300000, 800 };

	cout << "Contratacoes para o proximo ano: " << a.nome << " e " << b.nome << "!\n";
	cout << "Preco da aquisicao: R$" << a.salario + b.salario << "!\n";

	return 0;
}