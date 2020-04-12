#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	const int Tam = 15;
	char nome[Tam];                    // vetor vazio
	char comp[Tam] = "C++omputador";   // vetor inicializado

	cout << "Ola! Eu sou o " << comp << "! ";
	cout << "Qual e seu nome?\n";
	cin >> nome;

	cout << "Bem, " << nome << ", seu nome tem ";
	cout << strlen(nome) << " letras\ne esta armazenado ";
	cout << "em um vetor de " << sizeof(nome) << " bytes.\n";

	cout << "Sua inicial e " << nome[0] << ".\n";
	comp[3] = '\0';     // caractere nulo

	cout << "Meu apelido e " << comp << endl;
	
	return 0;
}
