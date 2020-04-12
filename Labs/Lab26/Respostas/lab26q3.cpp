#include <iostream>
using namespace std;

const int TAM_NOME = 30;

struct aluno
{
	char nome[TAM_NOME];
	int  nivel;
};

int PegarInfo(aluno va[], int n);
void Mostrar1(aluno a);
void Mostrar2(const aluno * pa);
void Mostrar3(const aluno va[], int n);

int main()
{
	cout << "Tamanho da classe: ";
	int tam;
	cin >> tam;

	// remove \n para uso do cin.getline
	while (cin.get() != '\n')
		continue;

	aluno * ptr = new aluno[tam];
	int inscritos = PegarInfo(ptr, tam);
	for (int i = 0; i < inscritos; ++i)
	{
		Mostrar1(ptr[i]);
		Mostrar2(&ptr[i]);
	}
	Mostrar3(ptr, inscritos);
	delete[] ptr;
	cout << "Feito!\n";

	return 0;
}

int PegarInfo(aluno va[], int n)
{
	int i;
	for (i = 0; 
		i < n && (cout << "Nome: ", cin.getline(va[i].nome, TAM_NOME), strcmp(va[i].nome, "")); 
		++i)
	{
		cout << "Nivel: ";
		cin >> va[i].nivel;
		
		// remove \n para uso do cin.getline
		while (cin.get() != '\n')
			continue;
	}
	return i;
}

void Mostrar1(aluno a)
{
	cout << a.nome << " " << a.nivel << endl;
}

void Mostrar2(const aluno * pa)
{
	cout << pa->nome << " " << pa->nivel << endl;
}

void Mostrar3(const aluno va[], int n)
{
	for (int i = 0; i < n; ++i)
	{
		cout << va[i].nome << " " << va[i].nivel << endl;
	}
}
