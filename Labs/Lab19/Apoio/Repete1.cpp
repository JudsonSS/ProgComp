#include <iostream>
using namespace std;
int main()
{
	char ch;
	int cont = 0;

	cout << "Digite caracteres, use # para sair:\n";
	do
	{
		cin >> ch;      // lê um caractere
		cout << ch;     // imprime o caractere
		++cont;         // conta o número de caracteres
	} 
	while (ch != '#');  // testa o caractere

	cout << endl << --cont << " caracteres lidos.\n";

	return 0;
}
