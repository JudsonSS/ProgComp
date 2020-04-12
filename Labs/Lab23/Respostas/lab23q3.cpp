#include <iostream>
#include <cctype>
#include <fstream>
using namespace std;

int main()
{
	int total = 0;
	int vogal = 0;
	int conso = 0;
	int outro = 0;

	ifstream fin;
	fin.open("texto.txt");
	if (!fin.is_open())
	{
		cout << "Erro na abertura do arquivo!\n";
		system("pause");
		exit(EXIT_FAILURE);
	}

	char ch;
	fin.get(ch);
	while (!fin.eof())
	{
		total++;
		if (isalpha(ch))
		{
			switch (ch)
			{
			case 'a':
			case 'A':
			case 'e':
			case 'E':
			case 'i':
			case 'I':
			case 'o':
			case 'O':
			case 'u':
			case 'U': vogal++; break;
			default : conso++;
			}
		}
		else
			outro++;

		fin.get(ch);
	}

	fin.close();

	cout << "Total de caracteres: " << total << endl;
	cout << vogal << " vogais\n";
	cout << conso << " consoantes\n";
	cout << outro << " outros\n";

	return 0;
}