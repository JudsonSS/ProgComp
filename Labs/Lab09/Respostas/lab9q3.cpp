#include <iostream>
using namespace std;

int main()
{
	const int HORASDIA = 24;
	const int MINHORAS = 60;
	const int SEGMIN   = 60;

	cout << "Entre com o numero de segundos: ";
	
	int segundos;
	cin >> segundos;

	int dias, horas, min, seg;
	int resto;

	dias     = segundos / (HORASDIA * MINHORAS * SEGMIN);
	resto    = segundos % (HORASDIA * MINHORAS * SEGMIN);
	horas    = resto / (MINHORAS * SEGMIN);
	resto    = resto % (MINHORAS * SEGMIN);
	min      = resto / SEGMIN;
	seg      = resto % SEGMIN;

	cout << segundos << " segundos = " 
		 << dias     << " dias, "
		 << horas    << " horas, "
		 << min      << " minutos e "
		 << seg      << " segundos.\n";
	
	return 0;
}