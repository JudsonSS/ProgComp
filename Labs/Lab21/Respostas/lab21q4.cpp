#include <iostream>
using namespace std;

int main()
{
	cout << "Caixa Eletronico\n";
	cout << "----------------\n";

	cout << "Saque: ";
	int saque;
	cin >> saque;

	// cédulas
	int c50 = 0;
	int c20 = 0;
	int c10 = 0;
	int c5 = 0;

	if (saque % 5 != 0)
	{
		cout << "Não é possível sacar esse valor!\n";
	}
	else
	{
		while (saque > 0)
		{
			if (saque >= 50)
			{
				c50 = saque / 50;
				saque %= 50;
			}
			if (saque >= 20)
			{
				c20 = saque / 20;
				saque %= 20;
			}
			if (saque >= 10)
			{
				c10 = saque / 10;
				saque %= 10;
			}
			if (saque >= 5)
			{
				c5 = saque / 5;
				saque %= 5;
			}
		}

		cout << "\nEntregando:\n";
		cout << c50 << " cédulas de R$50\n";
		cout << c20 << " cédulas de R$20\n";
		cout << c10 << " cédulas de R$10\n";
		cout << c5 << " cédulas de R$5\n";
	}

	return 0;
}