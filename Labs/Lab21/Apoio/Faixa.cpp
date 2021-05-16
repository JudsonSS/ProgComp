#include <iostream>
using namespace std;

const char * qualifica[4] =   // vetor de ponteiros para char
{ "jovem.\n", "adulto.\n", "velho.\n", "bebe.\n" };

int main()
{
	int idade, indice;
	cout << "Entre com sua idade em anos: ";
	cin >> idade;

	if (idade > 17 && idade < 35)
		indice = 0;
	else if (idade >= 35 && idade < 50)
		indice = 1;
	else if (idade >= 50 && idade < 65)
		indice = 2;
	else
		indice = 3;
	cout << "Voce se qualifica na categoria " << qualifica[indice];
	
	return 0;
}
