#include <iostream>
using namespace std;

int somaVetor(int[]);

int main()
{
	int batatas[3] = { 7, 8, 6 };
	cout << "Total de batatas = ";
	cout << somaVetor(batatas) << endl;

	return 0;
}

int somaVetor(int vet[])
{
	return vet[0] + vet[1] + vet[2];
}