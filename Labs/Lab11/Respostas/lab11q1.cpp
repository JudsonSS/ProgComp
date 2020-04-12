#include <iostream>
using namespace std;

const int TamStr = 40;

int main()
{
	cout << "Primeiro nome: ";
	char nome[TamStr];
	cin >> nome;

	cout << "Segundo nome: ";
	char sobrenome[TamStr];
	cin >> sobrenome;

	cout << "Bom dia, " << nome << " " << sobrenome << ".\n";
	cout << "Seja bem vindo " << nome[0] << sobrenome[0] << "!\n";

	return 0;
}