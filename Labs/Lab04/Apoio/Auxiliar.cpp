#include <iostream>
using namespace std;

void auxiliar(void);
void outra(void);

int main(void)
{
	// possibilita escrever e ler com acentos: 
	// muda código de página no prompt de comando
	// (deve usar fonte consolas ou lucida console)
	system("chcp 1252 > nul");

	cout << "Um programa em C++ "
	     << "sempre começa pela "
		 << "função main.\n";

	outra();
	auxiliar();
	
	cout << "mais de uma vez.\n";
	return 0;
}

void auxiliar(void) 
{
	cout << "Funções também podem "
		 << "ser invocadas ";
}

void outra(void) 
{
	cout << "Funções podem ser "
		 << "invocadas a partir "
		 << "da função main.\n";

	auxiliar();

	cout << "a partir de " 
		 << "outras funções.\n";
}
