#include <iostream>
using namespace std;

int main()
{
	cout << "Digite o numero de alunos (minimo 2): ";
	int numAlunos;
	cin >> numAlunos;

	float * vet = new float[numAlunos];

	cout << "Digite a nota de dois alunos:\n";
	cin >> vet[0] >> vet[1];

	cout << "As notas digitadas foram " << vet[0] << " e " << vet[1] << endl;

	delete[] vet;

	return 0;
}