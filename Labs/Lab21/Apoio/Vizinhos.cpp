#include <iostream>
using namespace std;
const int VetTam = 6;
int main()
{
	int idades[VetTam];
	cout << "Entre com a idade dos seus vizinhos.\nO programa termina quando voce tiver\n" 
		<< VetTam << " entradas ou digitar um valor negativo.\n";

	int i = 0;
	int temp;
	bool tem_vaga = true;

	cout << "Idade: ";
	while (tem_vaga && cin >> temp && temp >= 0)
	{
		idades[i++] = temp;
		if (i < VetTam)
			cout << "Idade: ";
		else
			tem_vaga = false;
	}

	if (i == 0)
		cout << "Sem dados, tchau!\n";
	else
	{
		cout << "Entre com sua idade: ";
		int voce;
		cin >> voce;

		int cont = 0;
		for (int j = 0; j < i; j++)
		{
			if (idades[j] > voce)
				++cont;
		}

		cout << cont;
		cout << " dos seus vizinhos sao mais velhos que voce.\n";
	}

	return 0;
}
