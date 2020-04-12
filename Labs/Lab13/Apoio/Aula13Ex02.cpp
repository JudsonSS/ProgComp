#include <iostream>
using namespace std;

union regkey {
	int  chave;
	char codigo[8];
};

int main() 
{
	cout << "Qual seu tipo de senha?\n[1] chave\n[2] codigo\nOpcao: ";
	int tipo;
	cin >> tipo;

	regkey senha;

	if (tipo == 1) 
	{
		cout << "Digite sua chave: ";
		cin >> senha.chave;
	}
	else 
	{
		cout << "Digite seu codigo: ";
		cin >> senha.codigo;
	}
}
