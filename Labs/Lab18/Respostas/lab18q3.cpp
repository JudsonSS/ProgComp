#include <iostream>
using namespace std;

int main()
{
	double daiane = 100;
	double celia  = 100;
	int anos = 0;

	while (celia <= daiane)
	{
		daiane += 10;
		celia += 0.05 * celia;
		++anos;
	}

	cout << fixed;
	cout.precision(2);

	cout << "Se passaram " << anos << " anos para os saldos atingirem os valores" << endl;
	cout << "Daiane: " << daiane << endl;
	cout << "Celia : " << celia << endl;

	return 0;
}