#include <iostream>
using namespace std;

int main()
{
	char ch;
	int cont = 0;

	cout << "Digite caracteres, use # para sair:\n";

	// lê e testa o caractere
	while ((ch = cin.get()) != '#')
	{
		cout << ch;     // exibe o caractere
		++cont;         // conta o número de caracteres
	}
	cout << endl << cont << " caracteres lidos.\n";

	return 0;
}