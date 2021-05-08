// passando registros por valor
#include <iostream>
using namespace std;

struct tempo
{
	int horas;
	int mins;
};

const int MinsPorHora = 60;

tempo SomaTempo(tempo t1, tempo t2);
void MostraTempo(tempo t);

int main()
{
	tempo dia1 = { 5, 45 };
	tempo dia2 = { 4, 55 };

	tempo viagem = SomaTempo(dia1, dia2);
	cout << "Total de dois dias: ";
	MostraTempo(viagem);

	tempo dia3 = { 4, 32 };

	cout << "Total de tres dias: ";
	MostraTempo(SomaTempo(viagem, dia3));

	return 0;
}

tempo SomaTempo(tempo t1, tempo t2)
{
	tempo total;
	total.mins = (t1.mins + t2.mins) % MinsPorHora;
	total.horas = t1.horas + t2.horas + (t1.mins + t2.mins) / MinsPorHora;
	return total;
}

void MostraTempo(tempo t)
{
	cout << t.horas << " horas, " << t.mins << " minutos\n";
}
