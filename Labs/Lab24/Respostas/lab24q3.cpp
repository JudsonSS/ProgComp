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
		cout << "Mensagens Coloridas\n";
		cout << "-------------------\n";
		cout << "[A]rmazenar\n";
		cout << "[E]xibir\n";
		cout << "[S]air\n";
		cout << "-------------------\n";
		cout << "Opção: [ ]\b\b";

		cin >> escolha;

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
	} 
	while (tolower(escolha) != 's');

}

void Armazenar()
{
	cin.get(); // ignora \n deixado por cin >> escolha

	cout << "Sua mensagem: ";
	char msg[81];
	cin.getline(msg, 81);

	cout << "Cor do texto: ";
	cor texto;
	cin >> texto.a;
	cin >> texto.b;
	cin >> texto.c;

	cout << "Cor do fundo: ";
	cor fundo;
	cin >> fundo.a;
	cin >> fundo.b;
	cin >> fundo.c;

	ofstream fout;
	fout.open("mensagem.cor", ios_base::out | ios_base::binary);
	fout.write((char*) msg, sizeof(msg));
	fout.write((char*) &texto, sizeof(cor));
	fout.write((char*) &fundo, sizeof(cor));
	fout.close();
}

void Exibir()
{
	char msg[81];
	cor texto;
	cor fundo;

	ifstream fin;
	fin.open("mensagem.cor", ios_base::in | ios_base::binary);
	if (fin.is_open())
	{		
		fin.read((char*) msg, sizeof(msg));
		fin.read((char*) &texto, sizeof(cor));
		fin.read((char*) &fundo, sizeof(cor));
		fin.close();

		// monta código de cor
		char color[24] = "\033[38;5;xxx;48;5;yyym";

		color[7] = texto.a;
		color[8] = texto.b;
		color[9] = texto.c;

		color[16] = fundo.a;
		color[17] = fundo.b;
		color[18] = fundo.c;

		cout << endl << color << msg << "\033[m" << endl;
	}
}
