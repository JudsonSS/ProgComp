#include <iostream>
using namespace std;

int main()
{
	cout << "Distancia percorrida em kilometros: ";
	int km;
	cin >> km;
	cout << "Quantidade de combustivel gasto: ";
	int litros;
	cin >> litros;

	// o resultado não é mostrado corretamente porque 
	// o programa só usa variáveis de tipo inteira e o 
	// resultado fica sempre truncado para um valor inteiro
	cout << "O consumo foi de " << km/litros << "km/litro\n";

	system("pause");
	return 0;
}