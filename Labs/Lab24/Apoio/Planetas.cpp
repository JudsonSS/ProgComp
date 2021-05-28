// entrada e saída em arquivos binários
#include <iostream>
#include <fstream>
using namespace std;

struct planeta
{
	char nome[20];     // nome do planeta
	double populacao;  // número de habitantes
	double gravidade;  // aceleração da gravidade
};

int main()
{
	planeta p;

	ifstream fin;     // cria objeto para leitura de arquivo
	fin.open("planetas.dat", ios_base::in | ios_base::binary);

	if (fin.is_open())     // se o arquivo foi aberto sem erros
	{
		cout << "Aqui esta o conteudo do arquivo:" << endl;
		while (fin.read((char *)&p, sizeof(planeta)))
		{
			cout << p.nome << " "
				<< p.populacao << " "
				<< p.gravidade << endl;
		}
		fin.close();
	}

	// acrescenta mais dados
	ofstream fout;
	fout.open("planetas.dat", ios_base::out | ios_base::app | ios_base::binary);

	if (!fout.is_open())
	{
		cout << "Arquivo nao pode ser aberto!" << endl;
		system("pause");
		exit(EXIT_FAILURE);
	}
	
	cout << "\nNome do planeta: ";
	cin >> p.nome;
	cout << "Populacao: ";
	cin >> p.populacao;
	cout << "Gravidade: ";
	cin >> p.gravidade;

	fout.write((char *)&p, sizeof(planeta));
	fout.close();

	fin.open("planetas.dat", ios_base::in | ios_base::binary);
	if (fin.is_open())
	{
		cout << "\nAqui esta o conteudo do arquivo:" << endl;
		while (fin.read((char *)&p, sizeof(planeta))) {
			cout << p.nome << " " << p.populacao << " "
				<< p.gravidade << endl;
		}
		fin.close();
	}

	return 0;
}

