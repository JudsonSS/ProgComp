#include <iostream>
using namespace std;

enum prefs {NOME, CARGO, APELIDO};

const int MAX = 4;

struct bop
{
	char nome[50];
	char cargo[50];
	char apelido[50];
	int pref;
};

int main()
{
	bop vet[MAX] =
	{ 
		{"Jose", "Contador", "Paquito", APELIDO},
		{"Marcos", "Porteiro", "Bibiri", CARGO},
		{"Joao", "Seguranca", "Montanha", CARGO},
		{"Carlos", "Motorista", "Tito", NOME}
	};

	cout << "Listagem de Funcionarios" << endl;
	cout << endl;
	cout << "a. Mostrar por nome" << endl;
	cout << "b. Mostrar por cargo" << endl;
	cout << "c. Mostrar por apelido" << endl;
	cout << "d. Mostrar por preferencia" << endl;
	cout << "e. Sair" << endl;
	cout << endl;

	cout << "Digite sua opcao: ";
	char op;
	cin >> op;

	while (op != 'e')
	{
		switch (op)
		{
		case 'a': 
			for (int i=0; i < MAX; i++)
				cout << vet[i].nome << endl;
			break;

		case 'b':
			for (int i=0; i < MAX; i++)
				cout << vet[i].cargo << endl;
			break;

		case 'c':
			for (int i=0; i < MAX; i++)
				cout << vet[i].apelido << endl;
			break;

		case 'd':
			for (int i=0; i < MAX; i++)
			{
				switch (vet[i].pref)
				{
				case NOME: cout << vet[i].nome << endl; break;
				case CARGO: cout << vet[i].cargo << endl; break;
				case APELIDO: cout << vet[i].apelido << endl; break;
				default : cout << "Preferencia invalida" << endl;
				}
			}
			break;

		default:
			cout << "Opcao invalida!" << endl;
		}

		cout << "\nDigite sua opcao: ";
		cin >> op;
	}

	cout << "Tchau!" << endl;

	return 0;
}