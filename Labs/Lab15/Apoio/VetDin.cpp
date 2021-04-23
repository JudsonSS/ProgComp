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
	jogador * ptime = new jogador[22];

	cout << "Digite o nome, salario e gols de dois jogadores:\n";
	cin >> ptime[0].nome; cin >> ptime[0].salario; cin >> ptime[0].gols;
	cin >> ptime[1].nome; cin >> ptime[1].salario; cin >> ptime[1].gols;

	cout << "Custo da aquisicao: R$" << ptime[0].salario + ptime[1].salario << "!\n";

	delete[] ptime;
}