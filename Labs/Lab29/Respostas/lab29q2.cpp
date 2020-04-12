#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;


struct Guloseima
{
	char marca[24];
	double peso;
	int calorias;
};

void ajustar(Guloseima & gulo, const char * marca = "Charge", double peso = 40.0, int cals = 187);
void exibir(const Guloseima & gulo);

int main()
{
	Guloseima boa, gostosa, super;

	ajustar(boa);
	exibir(boa);

	ajustar(gostosa, "Crunch", 25.0);
	exibir(gostosa);

	ajustar(super, "KitKat", 45.0, 241);
	exibir(super);

	return 0;
}

void ajustar(Guloseima & gulo, const char * marca, double peso, int cals)
{
	strcpy(gulo.marca, marca);
	gulo.peso = peso;
	gulo.calorias = cals;
}

void exibir(const Guloseima & gulo)
{
	cout << gulo.marca << " " << gulo.peso << "g " << gulo.calorias << "kcals" << endl;
}
