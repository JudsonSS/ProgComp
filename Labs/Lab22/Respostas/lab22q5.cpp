#include <iostream>
using namespace std;

int main()
{
	cout << "Menu \n"
		    "a) Inserir\n"
			"b) Remover\n"
			"c) Buscar\n"
			"d) Sair\n"
			"Escolha: ";

	char op;
	cin >> op;
	while (op != 'd')
	{
		switch (op)
		{
		case 'a': cout << "Inserir\n"; break;
		case 'b': cout << "Remover\n"; break;
		case 'c': cout << "Buscar\n"; break;
		default: cout << "Opcao Invalida\n"; break;
		}

		cout << "Escolha: ";
		cin >> op;
	}

	return 0;
}