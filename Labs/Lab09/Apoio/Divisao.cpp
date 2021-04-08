#include <iostream>
using namespace std;

int main()
{
	// sempre mostra 6 casas após a vírgula
	// cout.setf(ios_base::fixed, ios_base::floatfield);
	cout << fixed;

	cout << "Divisão Inteira: 9/5 = " << 9 / 5 << endl;
	cout << "Divisão Ponto-Flutuante: 9.0/5.0 = " << 9.0 / 5.0 << endl;
	cout << "Divisão Mista: 9.0/5 = " << 9.0 / 5 << endl;

	cout << endl;

	cout << "Constantes double: 1e7/9.0 = " << 1e7 / 9.0 << endl;
	cout << "Constantes float: 1e7f/9.0f = " << 1e7f / 9.0f << endl;

	return 0;
}
