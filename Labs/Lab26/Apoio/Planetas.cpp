#include <iostream>
#include <string>
using namespace std;

void mostrar(const string * strvet, int n);

int main()
{
	string lista[5];
	cout << "Digite seus 5 planetas favoritos:\n";
	for (int i = 0; i < 5; i++)
	{
		cout << i + 1 << ": ";
		getline(cin, lista[i]);
	}
	cout << "\nSua lista:\n";
	mostrar(lista, 5);

	return 0;
}

void mostrar(const string * strvet, int n)
{
	for (int i = 0; i < n; i++)
		cout << strvet[i] << " ";
	cout << endl;
}
