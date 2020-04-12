#include <iostream>
using namespace std;
int main()
{
	cout << "Este programa pode formatar seu disco rigido\n"
		"e destruir todos os seus dados.\n"
		"Voce deseja continuar? <s/n> ";
	char ch;
	cin >> ch;

	if (ch == 's' || ch == 'S')
		cout << "Voce foi avisado!\a\a\n";
	else if (ch == 'n' || ch == 'N')
		cout << "Uma escolha sabia... Tchau!\n";
	else
		cout << "Voce nao respondeu corretamente, eu deveria apagar seu disco!\n";

	return 0;
}
