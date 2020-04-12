#include <iostream>
using namespace std;

int main()
{
	cout << "Digite numeros (zero para encerrar):\n";
	int num;
	int soma = 0;

	do
	{
		cin >> num;
		soma += num;
		cout << "Soma parcial: " << soma << endl;

	} while (num != 0);

	
	return 0;
}