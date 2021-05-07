#include <iostream>
using namespace std;

int main()
{
	cout << "Digite quantidade de linhas e colunas da matriz: ";
	int linhas, colunas;
	cin >> linhas >> colunas;

	// usando um vetor para representar uma matriz
	int * mat = new int[linhas*colunas];

	// lendo elementos
	for (int i = 0; i < linhas; i++)
		for (int j = 0; j < colunas; j++)
			cin >> mat[i*colunas + j];

	// exibindo elementos
	for (int i = 0; i < linhas; i++)
	{
		for (int j = 0; j < colunas; j++)
			cout << mat[i*colunas + j] << " ";
		cout << endl;
	}

	// removendo matriz da memória
	delete[] mat;

	return 0;
}