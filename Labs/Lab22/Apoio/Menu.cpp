#include <iostream>
using namespace std;

void mostramenu();
void relatorio();
void bajular();

int main()
{
	mostramenu();

	int escolha;
	cin >> escolha;

	while (escolha != 5)
	{
		switch (escolha)
		{
		case 1:  cout << "\a\n\n";
			break;
		case 2:  relatorio();
			break;
		case 3:  cout << "Eu estava doente.\n\n";
			break;
		case 4:  bajular();
			break;
		default:  cout << "opcao invalida.\n\n";
		}

		mostramenu();
		cin >> escolha;
	}

	return 0;
}

void mostramenu()
{
	cout << "1) Alarme        2) Relatorio\n"
		"3) Desculpa      4) Bajulacao\n"
		"5) Sair\n"
		"Por favor, entre com uma opcao: ";
}

void relatorio()
{
	cout << "Tem sido uma excelente semana para negocios.\n"
		"As vendas subiram 120%. Os gastos cairam 35%.\n\n";

}
void bajular()
{
	cout << "Seus empregados acham voce o melhor chefe\n"
		"da industria. Os seus socios o consideram\n"
		"o melhor empresario do mercado.\n\n";
}
