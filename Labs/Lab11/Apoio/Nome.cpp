#include <iostream>
using namespace std;

int main()
{
	const int TamVet = 20;
	char nome[TamVet];
	char sobremesa[TamVet];

	cout << "Entre com seu nome:\n";    
	cin >> nome;   // lê apenas uma palavra

	cout << "Entre com sua sobremesa favorita:\n";
	cin >> sobremesa;

	cout << "Eu tenho um delicioso " << sobremesa;
	cout << " para voce, " << nome << ".\n";

	return 0;
}
