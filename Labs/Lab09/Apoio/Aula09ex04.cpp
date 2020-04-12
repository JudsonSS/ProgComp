#include <iostream>
#include <ctime>
using namespace std;

int main()
{
	const int Limite = 10;
	
	cout << "Sorteando valores de 0 a 9:\n";
	
	int sorteio = rand() % Limite;
	cout << sorteio;
	cout << endl;

	return 0;
}
