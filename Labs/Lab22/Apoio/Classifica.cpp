#include <iostream>
#include <cctype>
using namespace std;

int main()
{
	cout << "Entre com o texto para analise (@ para sair):\n";
	int brancos = 0, digitos = 0, chars = 0, pont = 0, outros = 0;
	char ch;

	cin.get(ch);       // lê o primeiro caractere
	while (ch != '@')  // testa o caractere sentinela
	{
		if (isalpha(ch)) chars++;         // é uma letra do alfabeto?
		else if (isspace(ch)) brancos++;  // é um caractere de espaço?
		else if (isdigit(ch)) digitos++;  // é um dígito?
		else if (ispunct(ch)) pont++;     // é uma pontuação?
		else outros++;
		cin.get(ch);   // lê o próximo caractere
	}

	cout << chars << " letras, " << digitos << " digitos " << brancos << " espacos, " 
		 << pont << " pontuacoes e " << outros << " outros.\n";

	return 0;
}