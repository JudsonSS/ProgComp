#include <iostream>
using std::cin;
using std::cout;
using std::endl;

// não foi usado "using namespace std;" porque o espaço de nomes std
// já contém um elemento de nome "data", o que causaria um choque 
// com o tipo "data" definido no programa

struct data
{
	short dia;
	short mes;
	short ano;
};

int DiasDeVida(data, data);

int main()
{
	data nasc, hoje;	// data no formato DD/MM/AAAA
	char separador;

	cout << "Data de nascimento: ";
	cin >> nasc.dia >> separador >> nasc.mes >> separador >> nasc.ano;

	cout << "Data de hoje: ";
	cin >> hoje.dia >> separador >> hoje.mes >> separador >> hoje.ano;

	cout << "Voce tem " << DiasDeVida(nasc, hoje) << " dias de vida." << endl;

	return 0;
}

int DiasDeVida(data nasc, data hoje)
{
	const int DiasPorMes = 31;
	const int DiasPorAno = 31 * 12;
	
	// Na data 05/02/2010, temos 1 (um) mês completo e mais 5 dias em 2010
	// Essa é a justificativa para subtrair 1 do valor do mês
	int ini = (nasc.ano * DiasPorAno) + ((nasc.mes - 1) * DiasPorMes) + nasc.dia;
	int fim = (hoje.ano * DiasPorAno) + ((hoje.mes - 1) * DiasPorMes) + hoje.dia;

	return fim - ini;
}
