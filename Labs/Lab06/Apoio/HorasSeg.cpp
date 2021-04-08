// horasseg.cpp – converte horas em segundos
#include <iostream>
using namespace std;

#define SEGPORHORA 3600

int main()
{
	cout << "Digite uma quantidade de tempo em horas: ";
	int horas;
	cin >> horas;

	int segundos = horas * SEGPORHORA;
	cout << "Isso equivale a " << segundos << " segundos.\n";
	
	return 0;
}