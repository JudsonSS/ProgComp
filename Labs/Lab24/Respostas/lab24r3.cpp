#include <iostream>
#include <fstream>
using namespace std;

struct peixe
{
	char nome[20];
	unsigned peso;
	float comp;
};

int main()
{ 
	peixe p;

	ifstream fin;
    fin.open("pescado.txt");
	if (!fin.is_open())
	{
		cout << "Erro na abertura do arquivo texto!\n";
		system("pause");
		exit(EXIT_FAILURE);
	}
	
	ofstream fout;
	fout.open("pescado.dat", ios_base::out | ios_base::binary);
	if (!fout.is_open())
	{
		cout << "Erro na abertura do arquivo binario!\n";
		system("pause");
		exit(EXIT_FAILURE);
	}
 	
	fin >> p.nome;
 	while (!fin.eof())
 	{		 	
		fin >> p.peso;
		fin >> p.comp;
		
		fout.write((char*) &p, sizeof p);
		
		fin >> p.nome;
	}  

	fin.close();
	fout.close();

	cout << "Pronto" << endl;
		
	return 0;
}
