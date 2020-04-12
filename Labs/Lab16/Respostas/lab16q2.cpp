#include <iostream>
using namespace std;

struct Carro
{
	char fabricante[20];
	int ano;
};

int main()
{
	cout <<  "Quantos carros para catalogar? ";
	int num;
	cin >> num;

	Carro * vet = new Carro[num];

	for(int i=0; i < num; i++)
	{
		cout << "Carro #" << i+1 << ":\n";
		cout << "Entre com a marca: ";
		cin >> vet[i].fabricante;
		cout << "Entre com o ano de fabricacao: ";
		cin >> vet[i].ano;
	}

	cout << "\nAqui esta sua colecao:\n";
	for (int i=0; i < num; i++)
		cout << vet[i].ano << " " << vet[i].fabricante << endl;

	delete [] vet;
	
	return 0;
}