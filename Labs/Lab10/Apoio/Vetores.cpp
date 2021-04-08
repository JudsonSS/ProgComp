#include <iostream>
using namespace std;
int main()
{
	int batatas[3];  // cria vetor de 3 elementos
	batatas[0] = 7;  // atribui valor ao 1° elemento
	batatas[1] = 8;  // atribui valor ao 2° elemento 
	batatas[2] = 6;  // atribui valor ao 3° elemento

	int custo[3] = { 20, 30, 5 }; // cria e inicializa vetor

	cout << "Quantidade de batatas = ";     
	cout << batatas[0] + batatas[1] + batatas[2] << endl;
	cout << "O pacote com " << batatas[1] << " batatas custa ";
	cout << custo[1] << " centavos por batata.\n";
	
	int total = batatas[1] * custo[1];
	cout << "O segundo pacote custa " << total << " centavos.\n";

	return 0;
}