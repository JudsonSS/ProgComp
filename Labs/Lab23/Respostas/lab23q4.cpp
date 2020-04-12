#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	system("vol > vol.txt");

	ifstream fin;
    fin.open("vol.txt");
	if (!fin.is_open())
	{
		cout << "Erro na abertura do arquivo!\n";
		exit(EXIT_FAILURE);
	}

	char volume[50];
	for (int i=0; i < 6; i++)
		fin >> volume;

	char numSerie[50];
	for (int i=0; i < 5; i++)
		fin >> numSerie;

	fin.close();

	cout << "Este programa funciona no Windows 7" << endl;
	cout << "Volume: " << volume << endl;
	cout << "Numero de Serie: " << numSerie << endl;
		
	return 0;
}