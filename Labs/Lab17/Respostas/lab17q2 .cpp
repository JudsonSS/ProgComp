#include <iostream>
using namespace std;

int main()
{
	cout << "Entre com o numero de linhas: ";
	int linhas;
	cin >> linhas;

	for (int i = 1; i <= linhas; i++)
	{
		for (int j = 1; j <= (linhas-i); j++)
		{
			cout << ".";
		}
		for (int j = 1; j <= i; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
 
	return 0;
}