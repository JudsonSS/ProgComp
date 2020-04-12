#include <iostream>
using namespace std;

struct Par
{
	int x;
	int y;
};

void organiza(Par v[], int tam);

int main()
{
	Par vet[10];
	Par p;

	cout << "Digite pares de valores (0 para encerrar):\n";
	int i = 0;
	while((cin >> p.x) && (p.x != 0) && (cin >> p.y) && (p.y != 0) && (i < 10))
		vet[i++] = p;

	cout << "Pares organizados:\n";
	organiza(vet, i);
	
	return 0;
}

void organiza(Par v[], int tam)
{
	int menor, maior;
	for (int i = 0; i < tam; ++i)
	{
		if (v[i].x < v[i].y)
		{
			menor = v[i].x;
			maior = v[i].y;
		}
		else
		{
			menor = v[i].y;
			maior = v[i].x;
		}

		cout << "(" << menor << "," << maior << ")" << endl;
	}
}
