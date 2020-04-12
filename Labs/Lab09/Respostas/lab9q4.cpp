#include <iostream>
using namespace std;

int main()
{
	cout << "Digite a quantia apostada pelo jogador 1: ";
	float aposta1;
	cin >> aposta1;

	cout << "Digite a quantia apostada pelo jogador 2: ";
	float aposta2;
	cin >> aposta2;

	cout << "Entre com o valor do premio: ";
	double premio;
	cin >> premio;

	double parte1 = (premio * aposta1) / (aposta1 + aposta2);
	double parte2 = premio - parte1;

	cout << fixed;      // cout.setf(ios_base::fixed, ios_base::floatfield);   	                  
	cout.precision(0);  // força a mostrar zero casas depois da vírgula

	cout << "O jogador 1 tem direito a R$" << parte1 << endl;
	cout << "O jogador 2 tem direito a R$" << parte2 << endl;

	system("pause");
	return 0;
}