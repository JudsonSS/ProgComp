#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	cout << "Entre com uma palavra: ";
	char palavra[20];
	cin >> palavra;

	// mostra as letras na ordem inversa     
	for (int i = strlen(palavra) - 1; i >= 0; i--)
		cout << palavra[i];
	cout << "\nTchau.\n";

	return 0;
}
