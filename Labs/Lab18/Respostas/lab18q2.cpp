#include <iostream>
using namespace std;

int main()
{

	int num;
	int quant = 0;
	float soma = 0;

	cout << "Digite valores inteiros (0 para sair):\n";
	cin >> num;
	while (num != 0)
	{
		quant++;
		soma += num;
		cin >> num;
	}

	cout << "Quantidade = " << quant << ", media = " << soma/quant << endl;	
	
	return 0;
}