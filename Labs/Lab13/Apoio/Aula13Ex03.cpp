#include <iostream>
#include <random>
using namespace std;

enum Sexo { Masculino, Feminino };

int main()
{
	cout << "Sorteando o sexo do bebe...\n";
	random_device rand;
	unsigned sorteio = rand() % 2;

	if (sorteio == Masculino)
		cout << "Parabens, um menino!\n";
	if (sorteio == Feminino)
		cout << "Parabens, uma menina!\n";

	return 0;
}
