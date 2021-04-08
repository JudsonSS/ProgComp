#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	const int Tam = 15;
	char nome[Tam];                   // vetor "vazio"
	char apelido[Tam] = "C++owboy";   // vetor inicializado

	cout << "Ola! Eu sou " << apelido;
	cout << "! Qual e seu nome?\n";     
	cin >> nome;

	cout << "Bem, " << nome << ", seu nome tem ";
	cout << strlen(nome) << " letras e esta armazenado\n";     
	cout << "em um vetor de " << sizeof(nome) << " bytes.\n";

	cout << "Sua inicial e " << nome[0] << ".\n";
	apelido[3] = '\0';   // caractere nulo
	cout << "Meu apelido e " << apelido << endl;

	return 0;
}
