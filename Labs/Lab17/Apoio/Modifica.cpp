#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	cout << "Entre com uma palavra: ";
	char palavra[20];
	cin >> palavra;

	// inverte string, modificando a string original
	char temp;
	int i, j;
	for (j = 0, i = strlen(palavra) - 1; j < i; --i, ++j)
	{
		temp = palavra[i];
		palavra[i] = palavra[j];
		palavra[j] = temp;
	}
	cout << palavra << "\nPronto.\n";

	return 0;
}
