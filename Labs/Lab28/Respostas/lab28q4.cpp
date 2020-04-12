#include <iostream>
using namespace std;

struct Par
{
	int x;
	int y;
};

void calcular(const Par & p, int & s, int & m);

int main()
{
	cout << "Digite dois valores:\n";
	Par valor;
	cin >> valor.x >> valor.y;
	
	int soma;
	int mult;
	calcular(valor, soma, mult);
	cout << "Soma: " << soma << endl;
	cout << "Mult: " << mult << endl;

	return 0;
}

void calcular(const Par & p, int & s, int & m)
{
	s = p.x + p.y;
	m = p.x * p.y;
}