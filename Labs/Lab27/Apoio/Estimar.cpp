#include <iostream>
using namespace std;

double tom(int);
double pam(int);

void estimar(int linhas, double(*pf)(int));

int main()
{
	int code;
	cout << "Quantas linhas de codigo voce precisa? ";
	cin >> code;
	cout << "Estimativa de Tom:\n";
	estimar(code, tom);
	cout << "Estimativa de Pam:\n";
	estimar(code, pam);
	
	return 0;
}

double tom(int lns)
{
	return 0.05 * lns;
}

double pam(int lns)
{
	return 0.03 * lns + 0.0004 * lns * lns;
}

void estimar(int linhas, double(*pf)(int))
{
	cout << linhas << " linhas levam ";
	cout << pf(linhas) << " hora(s)\n";
}
