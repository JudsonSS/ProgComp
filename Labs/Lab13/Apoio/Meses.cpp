#include <iostream>
using namespace std;

enum mes { Jan = 1, Fev, Mar, Abr, Mai, Jun, Jul, Ago, Set, Out, Nov, Dez };

int main()
{
	mes inicio, fim; // cria variáveis do tipo mês

	inicio = Fev;   // inicio do semestre
	fim = Nov;		// fim do semestre

	cout << "Digite o numero do mes atual: ";
	int atual;
	cin >> atual;    // lê o mês atual para uma variável inteira

	if (atual >= inicio && atual <= fim)
		cout << "Voce esta em periodo de aulas.\n";
	else
		cout << "Ferias!\n";

	return 0;
}
