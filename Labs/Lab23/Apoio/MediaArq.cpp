#include <iostream>
#include <fstream>
using namespace std;
const int Tam = 60;

int main()
{
	char arquivo[Tam];
	ifstream fin;                  // cria objeto para leitura de arquivo

	cout << "Digite nome do arquivo: ";
	cin.getline(arquivo, Tam);
	fin.open(arquivo);             // associa com arquivo do disco

	if (!fin.is_open())            // a abertura do arquivo falhou
	{
		cout << "A abertura do arquivo " << arquivo << " falhou!" << endl;
		cout << "Programa encerrando.\n";
		system("pause");
		exit(EXIT_FAILURE);
	}

	double valor;					// valor lido do usuário
	double soma = 0.0;				// soma dos itens
	int cont = 0;					// número de itens lidos

	fin >> valor;					// lê primeiro valor
	while (fin.good())				// enquanto a entrada for boa e não EOF
	{
		++cont;						// mais um item lido
		soma += valor;				// acumula valores lidos
		fin >> valor;				// lê próximo valor
	}

	if (fin.eof())
		cout << "Fim de arquivo alcancado.\n";
	else
		if (fin.fail())
			cout << "Tipo incorreto de dado na entrada.\n";
		else
			cout << "Entrada encerrada por razao desconhecida.\n";

	if (cont == 0)
		cout << "Nenhum valor lido.\n";
	else
	{
		cout << "Itens lidos: " << cont << endl;
		cout << "Soma:  " << soma << endl;
		cout << "Media: " << soma / cont << endl;
	}

	fin.close();    // fecha o arquivo

	return 0;
}