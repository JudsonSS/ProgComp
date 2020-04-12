// converte metros em centímetros
#include <iostream>
using namespace std;

int converte(int);   // protótipo da função

int main()
{
	cout << "Entre com a distancia em metros: ";
	int num;
	cin >> num;

	int cent = converte(num);    // inicializando com uma função 

	cout << num << " metros = " << cent << " centimetros.\n";

	return 0;
}

int converte(int n)    // definição da função
{
	int val = 100 * n;
	return val;
}
