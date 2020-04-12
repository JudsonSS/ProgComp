#include <iostream>
using namespace std;

int main()
{
	cout << "Digite uma palavra: ";
	char palavra[20];
	cin >> palavra;

	char invertida[20];
	int tam = strlen(palavra);
	for (int i=0; i < tam; i++)
		invertida[i] = palavra[tam-i-1];
	
	invertida[tam] = '\0';

	cout << "Palavra invertida: " << invertida << endl;

	if (strcmp(palavra, invertida))
		cout << "A palavra nao e um palindromo\n";
	else
		cout << "A palavra e um palindromo\n";
	
	return 0;
}