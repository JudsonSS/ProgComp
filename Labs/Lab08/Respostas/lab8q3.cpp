#include <iostream>
using namespace std;

#define SegundosPorAno 3.156e7

float anosParaSegundos(int);

int main()
{
	cout << "Digite sua idade em anos: ";
	int idade;
	cin >> idade;

	cout << idade << " anos correspondem a " << anosParaSegundos(idade) << " segundos." << endl;

	cout.setf(ios_base::fixed, ios_base::floatfield);
	cout.precision(1);

	cout << idade << " anos correspondem a " << anosParaSegundos(idade) << " segundos." << endl;

	return 0;
}


float anosParaSegundos(int anos)
{
	return anos * SegundosPorAno;
}