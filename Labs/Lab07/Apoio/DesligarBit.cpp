#include <iostream>
using namespace std;

int main()
{
	cout << "Desligar qual bit? ";
	int bit;
	cin >> bit;
	unsigned char binaop = 1 << bit;

	unsigned char estado = 8;
	estado = estado & ~binaop;

	cout << int(estado) << endl;

	return 0;
}