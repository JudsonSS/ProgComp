#include <iostream>
using namespace std;

int main()
{
	float preco[3] = {1.5f, 2.0f, 1.0f};
	float quantidade[3];

	// boas vindas
	cout << "Prezado Cliente," << endl;
	cout << endl;
	cout << "Digite a quantidade de quilos desejados:\n";
	
	// entrada de dados
	cout << "Alface: ";
	cin >> quantidade[0];
	cout << "Beterraba: ";
	cin >> quantidade[1];
	cout << "Cenoura: ";
	cin >> quantidade[2];
	cout << endl;

	// impressao do resumo
	cout << fixed;
	cout.precision(2);

	cout << "Resumo da Compra\n";
	cout << "----------------------\n";
	cout << "Alface:   = R$" << quantidade[0] * preco[0] << endl;
	cout << "Beterraba = R$" << quantidade[1] * preco[1] << endl;
	cout << "Cenoura   = R$" << quantidade[2] * preco[2] << endl;
	cout << "----------------------\n";
	cout << "Total     = R$" 
		 << quantidade[0] * preco[0] + 
		    quantidade[1] * preco[1] + 
		    quantidade[2] * preco[2] 
		 << endl;
	
	return 0;
}