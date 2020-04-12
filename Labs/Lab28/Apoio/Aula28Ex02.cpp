// definindo e usando uma referência
#include <iostream>
using namespace std;
int main()
{
	int ratos = 101;
	int & roedores = ratos;  // roedores é uma referência
	cout << "ratos = " << ratos;
	cout << ", roedores = " << roedores << endl;
	cout << "endereço de ratos    = " << &ratos << endl;
	cout << "endereço de roedores = " << &roedores << endl;

	int coelhos = 50;
	roedores = coelhos;   // podemos mudar a referência?

	cout << "coelhos = " << coelhos;
	cout << ", ratos = " << ratos;
	cout << ", roedores = " << roedores << endl;
	cout << "endereço de coelhos  = " << &coelhos << endl;
	cout << "endereço de roedores = " << &roedores << endl;

	return 0;
}
