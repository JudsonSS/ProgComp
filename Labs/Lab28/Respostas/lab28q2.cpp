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

void exibir(const caixa & cx);
void volume(caixa & cx);

int main()
{
	caixa leite = { "Prepak", 0.25f, 0.15f, 0.1f };
	exibir(leite);
	volume(leite);
	exibir(leite);

	return 0;
}

void exibir(const caixa & cx)
{
	cout << cx.marca << ": " 
		<< cx.altura << " x " 
		<< cx.largura << " x " 
		<< cx.comprimento << ", volume = " 
		<< cx.volume << "\n";
}

void volume(caixa & cx)
{
	cx.volume = cx.altura * cx.largura * cx.comprimento;
}