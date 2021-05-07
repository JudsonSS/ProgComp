#include <iostream>
using namespace std;

int main()
{
	char ch;
	int cont = 0;

	cout << "Digite caracteres, use # para sair:\n";
	cin.get(ch);        // lê um caractere
	while (ch != '#')   // testa o caractere
	{
		cout << ch;     // imprime o caractere
		++cont;         // conta o número de caracteres
		cin.get(ch);    // lê o próximo caractere
	}
	cout << endl << cont << " caracteres lidos.\n";

	return 0;
}
