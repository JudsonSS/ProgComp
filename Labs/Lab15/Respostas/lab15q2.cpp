#include <iostream>
using namespace std;

struct balao
{
	float diametro;
	char marca[20];
	int modelo;	
};

int main()
{
	balao * ptbal = new balao;
	
	cout << "Entre com o diametro: ";
	cin >> ptbal->diametro;
	cout << "Entre com a marca: ";
	cin >> ptbal->marca;
	cout << "Entre com o modelo: ";
	cin >> ptbal->modelo;
	
	cout << endl;
	cout << "O balao inserido foi: ";
	cout <<  ptbal->modelo << " " << ptbal->diametro << " " << ptbal->marca  << endl;
	
	delete ptbal;

	return 0;
}