#include <iostream>
#include <fstream>
using namespace std;

int main()
{ 
	ifstream fin;
    fin.open("pescado.txt");
	if (!fin.is_open())
	{
		cout << "Erro na abertura do arquivo!\n";
		system("pause");
		exit(EXIT_FAILURE);
	}
 	
	char nome[40];
	int peso;
	int quant;
	int total = 0;
 	
	fin >> nome;
 	while (!fin.eof())
 	{		 	
		fin >> peso;
		fin >> quant;
		total += peso;
		fin >> nome;
	}  

	fin.close();

	cout << "Total de quilos pescado = " << total << endl;
		
	return 0;
}
