#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	ifstream fin;
    fin.open("situacao.txt");
	if (!fin.is_open())
	{
		cout << "Erro na abertura do arquivo!\n";
		exit(EXIT_FAILURE);
	}

	ofstream fout;
	fout.open("resultado.txt");  
	if (!fout.is_open())
	{
		cout << "Erro na abertura do arquivo!\n";
		exit(EXIT_FAILURE);
	}
	
	float n1, n2, n3, media;

	char nome[40];
	fin >> nome;

	while (!fin.eof())
	{
		fin >> n1;
		fin >> n2;
		fin >> n3;

		fout << nome << " ";

		media = (n1*2 + n2*3 + n3*4)/9;

		if (media >= 7.0)
			fout << "Aprovado" << endl;
		else
			if (media < 3.5)
				fout << "Reprovado" << endl;
			else
				fout << "4a Prova" << endl;

		fin >> nome;
	}

	fin.close();
	fout.close();

	cout << "Pronto!" << endl;
	return 0;
}
