#include <iostream>
using namespace std;

int main()
{
	int segundos, minutos;
	cout << "Digite uma quantidade de minutos: ";
	cin >> minutos;
	segundos = 100 * minutos;
	cout << "Existem " << segundos << " segundos em " 
		 << minutos << " minutos.";
	cout << endl;
	
	return 0;
}