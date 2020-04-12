#include <iostream>
using namespace std;

void mostraTempo(int, int);

int main()
{
	int horas, mins;
	cout << "Entre com o numero de horas: ";
	cin >> horas;
	cout << "Entre com o numero de minutos: ";
	cin >> mins;

	cout << "Agora sao ";
	mostraTempo(horas,mins);
	cout << endl;

	return 0;
}

void mostraTempo(int hora, int min)
{
	cout << hora << ":" << min;
}