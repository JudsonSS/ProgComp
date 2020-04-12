#include <iostream>
#include <fstream>
using namespace std;

struct cor
{
	char a;
	char b;
	char c;
};

void Armazenar();
void Exibir();

int main()
{
	char escolha;

	do
	{
		cout << "Imagens Coloridas\n";
		cout << "-----------------\n";
		cout << "[A]rmazenar\n";
		cout << "[E]xibir\n";
		cout << "[S]air\n";
		cout << "-----------------\n";
		cout << "Opção: [ ]\b\b";

		cin >> escolha;
		cout << endl;

		switch (escolha)
		{
		case 'A':
		case 'a':
			Armazenar();
			break;
		case 'E':
		case 'e':
			Exibir();
			break;
		}
		cout << endl;
	} while (tolower(escolha) != 's');

}

void Armazenar()
{
	cout << "Altura: ";
	short altura;
	cin >> altura;

	cout << "Largura: ";
	short largura;
	cin >> largura;

	// cria vetor dinâmico para guardar matriz
	cor * cores = new cor[altura * largura];

	// lê os valores (sempre de 3 caracteres) para o vetor
	cout << "\nDefina " << largura << " cores em cada linha\n";
	for (int i = 0; i < altura; ++i)
	{
		cout << "#" << i + 1 << ": ";
		for (int j = 0; j < largura; ++j)
		{
			cin >> cores[i * largura + j].a;
			cin >> cores[i * largura + j].b;
			cin >> cores[i * largura + j].c;
		}
	}

	// armazena altura, largura e vetor de cores no arquivo
	ofstream fout;
	fout.open("imagem.cor", ios_base::out | ios_base::binary);
	fout.write((char*)&altura, sizeof(short));
	fout.write((char*)&largura, sizeof(short));
	fout.write((char*)cores, sizeof(cor) * altura * largura);

	// fecha arquivo e libera memória do vetor
	fout.close();
	delete[] cores;
}

void Exibir()
{
	short altura;
	short largura;
	
	ifstream fin;
	fin.open("imagem.cor", ios_base::in | ios_base::binary);

	if (fin.is_open())
	{
		// lê altura e largura da imagem
		fin.read((char*) &altura, sizeof(short));
		fin.read((char*) &largura, sizeof(short));

		// cria e preenche vetor de cores com dados do arquivo
		cor * cores = new cor[altura * largura];
		fin.read((char*) cores, sizeof(cor) * altura * largura);

		// define cor de fundo
		char color[12] = "\033[48;5;xxxm";

		// ajusta vetor color com as cores lidas do arquivo
		for (int i = 0; i < altura; ++i)
		{
			for (int j = 0; j < largura; ++j)
			{
				int index = i * largura + j;
				color[7] = cores[index].a;
				color[8] = cores[index].b;
				color[9] = cores[index].c;

				cout << color << ' ';
			}
			cout << "\033[m" << endl;
		}
		cout << endl;

		// fechar arquivo e libera memória do vetor
		fin.close();
		delete[] cores;
	}	
}
