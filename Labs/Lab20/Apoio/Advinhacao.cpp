#include <iostream>
using namespace std;
const int Fav = 27;
int main()
{
	int n;
	cout << "Digite um numero entre 0 e 100 para ";
	cout << "descobrir meu favorito: ";
	do
	{
		cin >> n;
		if (n < Fav)
			cout << "Muito baixo, tente novamente: ";
		else if (n > Fav)
			cout << "Muito alto, tente novamente: ";
		else
			cout << Fav << " e o meu favorito!\n";
	} while (n != Fav);

	return 0;
}
