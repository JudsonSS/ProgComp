// cenouras.cpp – programa de processamento de comida
#include <iostream>
using namespace std;

int main()
{
	int cenouras;    			// declara uma variável inteira
	cenouras = 25;   			// atribui um valor a uma variável

	cout << "Eu tenho ";
	cout << cenouras;            // exibe o valor da variável
	cout << " cenouras.";
	cout << endl;

	cenouras = cenouras - 1;     // modifica a variável
	cout << "Agora eu tenho " << cenouras << " cenouras." << endl;

	return 0;
}
