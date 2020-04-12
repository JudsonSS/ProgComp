#include <iostream>
using namespace std;

int soma(int vet[]);

int main()
{
	cout << "Digite cinco valores: ";
	int val[5];
	cin >> val[0] >> val[1] >> val[2] >> val[3] >> val[4];

	cout << "A soma do vetor e " << soma(val) << "." << endl;

    return 0;
}

int soma(int vet[])
{
	return vet[0] + vet[1] + vet[2] + vet[3] + vet[4];
}
