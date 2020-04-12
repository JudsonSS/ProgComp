// Usando registros com funções
#include <iostream>
using namespace std;

struct tempo
{
	int horas;
	int mins;
};

const int MinsPorHora = 60;

void SomaTempo(const tempo * t1, const tempo * t2, tempo * t3);
void MostraTempo(const tempo * t);

int main()
{
	tempo dia1 = { 5, 45 };
	tempo dia2 = { 4, 55 };
	tempo dois;

	SomaTempo(&dia1, &dia2, &dois);
	cout << "Total de dois dias: ";
	MostraTempo(&dois);

	tempo dia3 = { 4, 32 };
	tempo tres;
	SomaTempo(&dois, &dia3, &tres);

	cout << "Total de tres dias: ";
	MostraTempo(&tres);

	return 0;
}

void SomaTempo(const tempo * t1, const tempo * t2, tempo * ret)
{
	ret->mins = (t1->mins + t2->mins) % MinsPorHora;
	ret->horas = t1->horas + t2->horas + (t1->mins + t2->mins) / MinsPorHora;
}

void MostraTempo(const tempo * t)
{
	cout << t->horas << " horas, " << t->mins << " minutos\n";
}


