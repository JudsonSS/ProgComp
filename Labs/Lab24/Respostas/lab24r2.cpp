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
	fin.open("peixes.dat", ios_base::in | ios_base::binary);
	if (!fin.is_open())
	{
		cout << "Erro na abertura do arquivo!\n";
		system("pause");
		exit(EXIT_FAILURE);
	}

	cout << "Peixes Cadastrados" << endl;
	while (fin.read((char*) &p, sizeof p))
	{
		cout << p.nome << " " 
			 << p.peso << " " 
			 << p.comp << endl; 
	}
	cout << endl;
	fin.close();

	ofstream fout;
	fout.open("peixes.dat", ios_base::out | ios_base::app | ios_base::binary);
	if (!fout.is_open())
	{
		cout << "Erro na abertura do arquivo!\n";
		system("pause");
		exit(EXIT_FAILURE);
	}

	cout << "Cadastro de Novo Peixe" << endl;
	cout << "Nome do Peixe: ";
	cin >> p.nome;
	cout << "Peso (gramas): ";
	cin >> p.peso;
	cout << "Comprimento (cm): ";
	cin >> p.comp;

 	fout.write((char*) &p, sizeof p);
	fout.close();

	return 0;
}
