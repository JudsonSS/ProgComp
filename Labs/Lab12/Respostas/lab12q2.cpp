#include <iostream>
using namespace std;

struct chocolate
{
	char  marca[25];
	float peso;
	int   calorias;
};

int main()
{
	chocolate vet[3] =
	{
		{"Prestigio", 170.0f, 300},
		{"Charge", 175.0f, 400},
		{"Choquito", 160.0f, 320}
	};

	cout << vet[0].marca << " " << vet[0].peso << " " << vet[0].calorias << endl;
	cout << vet[1].marca << " " << vet[1].peso << " " << vet[1].calorias << endl;
	cout << vet[2].marca << " " << vet[2].peso << " " << vet[2].calorias << endl;

	return 0;
}