#include <iostream>
using namespace std;
int main()
{
	int v[3];  // cria vetor de 3 elementos

	cout << "Conteudo da posicao 0: " << v[0] << endl;
	cout << "Conteudo da posicao 1: " << v[1] << endl;  
	cout << "Conteudo da posicao 2: " << v[2] << endl << endl;

	v[0] = 0;  v[1] = 0;  v[2] = 0;

	cout << "Conteudo da posicao 0: " << v[0] << endl;
	cout << "Conteudo da posicao 1: " << v[1] << endl;   
	cout << "Conteudo da posicao 2: " << v[2] << endl;

	cout << "\nO vetor tem " << sizeof v << " bytes.\n";
	cout << "Um elemento tem " << sizeof v[0] << " bytes.\n";

	return 0;
}
