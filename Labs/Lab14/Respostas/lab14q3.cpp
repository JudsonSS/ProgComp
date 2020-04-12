#include <iostream>
using namespace std;

void Mais(int * pnum)
{
	*pnum = *pnum + 1;
}

int Incrementa(int num)
{
	num = num + 1;
	return num;
}

int main()
{
	cout << "Digite um valor: ";
	int valor;
	cin >> valor;

	Mais(&valor);
	cout << "Resultado apos Mais: " << valor << endl;

	valor = Incrementa(valor);
	cout << "Resultado apos Incrementa: " << valor << endl;
}