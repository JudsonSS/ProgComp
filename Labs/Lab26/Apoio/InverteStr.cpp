// método errado de retornar uma string
#include <iostream>
using namespace std;

char * InverteString(const char * str);

int main()
{
	char nome[40];
	cout << "Digite seu nome: ";
	cin >> nome;

	cout << "Seu nome invertido: ";
	cout << InverteString(nome) << endl;

	return 0;
}

char * InverteString(const char * str)
{
	char invertida[40];
	const int Tam = strlen(str);
	
	for (int i = 0; i < Tam; i++)
		invertida[i] = str[Tam - 1 - i];

	invertida[Tam] = '\0';

	return invertida;
}


