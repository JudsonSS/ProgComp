// flexao.cpp - definindo uma função
#include <iostream>
using namespace std;

void flexao(int);       // protótipo da função flexao

int main()
{
	flexao(3);         // chama a função flexao
	cout << "Escolha um numero inteiro: ";
	int cont;
	cin >> cont;
	flexao(cont);      // chama flexao novamente

	return 0;
}

void flexao(int n)
{
	cout << "Faca " << n << " flexoes." << endl;
}
