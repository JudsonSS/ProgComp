#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	cout << "Nome do arquivo: ";
	char arquivo[50];
	cin >> arquivo;

	cout << "Palavra: ";
	char palavra[50];
	cin >> palavra;

	ifstream fin;
    fin.open(arquivo);
	if (!fin.is_open())
	{
		cout << "Erro na abertura do arquivo!\n";
		exit(EXIT_FAILURE);
	}

	bool encontrada = false;
	char token[50];

	while (fin >> token && !encontrada)
	{
		if (strcmp(token, palavra))
			encontrada = true;
	}
	fin.close();

	if (encontrada)
		cout << "A palavra \"" << palavra << "\" esta presente no texto." << endl;
	else
		cout << "A palavra \"" << palavra << "\" nao esta no texto." << endl;
	
	return 0;
}