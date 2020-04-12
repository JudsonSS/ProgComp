#include <iostream>
using namespace std;

int main()
{
	cout << "Digite o valor do contador: ";
	int limite;
	cin >> limite;

	int i;
	for (i = limite; i; i--)  // encerra quando i é 0
		cout << "i = " << i << "\n";

	cout << "Finalizado agora que i = " << i << endl;

	return 0;
}