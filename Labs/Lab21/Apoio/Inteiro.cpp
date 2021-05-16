#include <iostream>
#include <climits>
using namespace std;

bool is_int(double);

int main()
{
	cout << "Entre com um valor inteiro: ";
	double num;
	cin >> num;

	while (!is_int(num))  // repete enquanto não é um inteiro
	{
		cout << "Fora da faixa, tente novamente: ";
		cin >> num;
	}
	int val = int(num);  // type cast
	cout << "Voce digitou o inteiro " << val << "\nTchau!\n";

	return 0;
}

bool is_int(double x)
{
	if (x <= INT_MAX && x >= INT_MIN)
		return true;
	else
		return false;
}

