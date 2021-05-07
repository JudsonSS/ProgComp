#include <iostream>
using namespace std;

int main()
{
	cout << "Digite quantidade de linhas e colunas da matriz: ";
	int linhas, colunas;
	cin >> linhas >> colunas;

	// criando a matriz
	int ** mat = new int*[linhas];
	for (int i = 0; i < linhas; i++)
		mat[i] = new int[colunas];

	// lendo elementos
	for (int i = 0; i < linhas; i++)
		for (int j = 0; j < colunas; j++)
			cin >> mat[i][j];

	// exibindo elementos
	for (int i = 0; i < linhas; i++)
	{
		for (int j = 0; j < colunas; j++)
			cout << mat[i][j] << " ";
		cout << endl;
	}

	// removendo matriz da memória
	for (int i = 0; i < linhas; i++)
		delete[] mat[i];
	delete[] mat;

	return 0;
}

