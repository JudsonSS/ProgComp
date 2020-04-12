#include <iostream>
using namespace std;

int main()
{
	// entrada de dados
	cout << "Qual e o seu nome? ";
	char nome[40];
	cin.getline(nome, 40);
	
	cout << "Qual conceito voce merece? ";
	char conceito;
	cin >> conceito;

	// atribui o próximo caractere da tabela ASCII
	conceito = conceito + 1;  

	// exibindo resultado
	cout << endl;
	cout << "Bom dia  " << nome << ", seu conceito e " << conceito << "." << endl;

	return 0;
}