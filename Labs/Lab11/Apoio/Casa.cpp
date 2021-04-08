// misturando cin e cin.getline 
#include <iostream>
using namespace std;

int main()
{
	cout << "Em que ano sua casa foi construida?\n";
	int ano;
	cin >> ano;

	cout << "Qual e seu endereco?\n";
	char endereco[80];
	cin.getline(endereco, 80);

	cout << "Ano de construcao: " << ano << endl;
	cout << "Endereco: " << endereco << "\n";
	cout << "Pronto!\n";

	return 0;
}
