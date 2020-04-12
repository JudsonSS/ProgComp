#include <iostream>
using namespace std;

// enumeração para meses
enum mes { Jan = 1, Fev, Mar, Abr, Mai, Jun, Jul, Ago, Set, Out, Nov, Dez };

// constantes string para meses
const char meses[12][20] =
{
	"Janeiro", 
	"Fevereiro", 
	"Marco", 
	"Abril", 
	"Maio", 
	"Junho", 
	"Julho", 
	"Agosto", 
	"Setembro", 
	"Outubro", 
	"Novembro", 
	"Dezembro"
};

// protótipos das funções
istream & operator>>(istream &, mes &);
ostream & operator<<(ostream &, mes &);


int main()
{
	mes inicio, fim;	// cria variáveis do tipo mês

	inicio = Mar;		// inicio do semestre
	fim = Jun;			// fim do semestre

	cout << "Digite o número do mes atual: ";
	mes atual;
	cin >> atual;		// lê o mês atual para uma variável inteira

	if (atual >= inicio && atual <= fim)
		cout << "Em " << atual <<  " voce esta em periodo de aulas.\n";
	else
		cout << "Em " << atual << " voce esta em ferias!\n";

	return 0;
}

// usando cin com mes
istream & operator>>(istream & is, mes & m)
{
	int temp;
	is >> temp;

	if (temp >= Jan && temp <= Dez)
		m = mes(temp);

	return is;
}

// usando cout com mes
ostream & operator<<(ostream & os, mes & m)
{
	os << meses[m - 1];

	return os;
}
