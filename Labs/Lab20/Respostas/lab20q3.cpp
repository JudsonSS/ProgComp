#include <iostream>
using namespace std;
const int MaxQ = 10;

int main()
{
	double donativos[MaxQ];

	cout << "Digite ate 10 valores de donativos (zero para encerrar):\n";
	double num;
	cin >> num;

	int qnd = 0;
	double soma = 0;
	while (num != 0) 
	{
		if (qnd < MaxQ)
		{
			donativos[qnd++] = num;	
			soma += num;
		}
		cin >> num;
	}
	
	double media = soma / qnd;
	int cont = 0;
	for (int i = 0; i < qnd; i++) 
		if (donativos[i] > media)
			++cont;

	cout << fixed;
	cout.precision(2);

	cout << "A media dos valores doados foi de R$ " << media << ".\n";
	cout << cont << " valores foram maiores que a media.\n";
 
    return 0;
}
