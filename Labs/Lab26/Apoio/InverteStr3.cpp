// método com parâmetro adicional
#include <iostream>
using namespace std;

void InverteString(const char * str, char * inv);

int main()
{
	char nome[40], invertida[40];
	cout << "Digite seu nome: ";
	cin >> nome;

	InverteString(nome, invertida);
	cout << "Seu nome invertido: ";
	cout << invertida << endl;

	return 0;
}

void InverteString(const char * str, char * inv)
{
	const int Tam = strlen(str);

	for (int i = 0; i < Tam; i++)
		inv[i] = str[Tam - 1 - i];

	inv[Tam] = '\0';
}





