#include <iostream>
using namespace std;

int main()
{
	constexpr int Tam = 5 * sizeof(int);    // valor constexpr
	const int Max = rand();                 // valor const

	cout << "Tam:" << Tam << endl;          // 20     
	cout << "Max:" << Max << endl;          // número aleatório
	
	int val[Tam];                           // ok = Tam é uma constexpr
	//int vet[Max];                           // erro = Max não é uma expressão constante

	return 0;
}