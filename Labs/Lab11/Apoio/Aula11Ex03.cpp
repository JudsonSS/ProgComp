#include <iostream>
using namespace std;

int main()
{
	const int TamVet = 20;
	char nome[TamVet];
	char sobremesa[TamVet];

	cout << "Entre com seu nome:\n";    
	cin.getline(nome, TamVet);

	cout << "Entre com sua sobremesa favorita:\n";
	cin.getline(sobremesa, TamVet);

	cout << "Eu tenho um " << sobremesa;
	cout << " para voce, " << nome << ".\n";

	return 0;
}