#include <iostream>
using namespace std;
int main()
{
	cout << "Digite seu primeiro nome: ";
	char nome[20];
	cin >> nome;

	cout << "Seu nome na vertical e em codigos ASCII:\n";
	int i = 0;               // comece no início da string
	while (nome[i] != '\0')  // processa até o fim da string
	{
		cout << nome[i] << ": " << int(nome[i]) << endl;
		i++;
	}

	return 0;
}