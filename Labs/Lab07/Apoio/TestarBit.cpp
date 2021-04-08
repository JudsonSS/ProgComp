#include <iostream>
using namespace std;

int main()
{
	cout << "Testar qual bit? ";
	int bit;
	cin >> bit;
	unsigned char binaop = 1 << bit;

	unsigned char estado = 240;
	if (estado & binaop)
		cout << "ligado" << endl;
	else
		cout << "desligado" << endl;

	return 0;
}