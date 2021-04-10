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
	jogador equipe[22] =
	{
		{ "Bebeto", 200000, 182 },
		{ "Romario", 300000, 178 }
	};

	cout << "Contracoes para o proximo ano: " << equipe[0].nome << " e " << equipe[1].nome << "!\n";
	cout << "Preco da aquisicao: R$" << equipe[0].salario + equipe[1].salario << "!\n";

	return 0;
}
