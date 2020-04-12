#include <iostream>
using namespace std;

struct doacao
{
	char nome[30];
	double valor;
};

int main()
{
	cout << "Digite o numero de contribuintes: ";
	int contrib;
	cin >> contrib;

	doacao * vet = new doacao[contrib];

	for (int i=0; i < contrib; i++)
	{
		cin.get(); // descarta \n do buffer
		cout << "#" << i+1 << endl;
		cout << "Nome: ";
		cin.getline(vet[i].nome, 30);
		cout << "Valor: "; 
		cin >> vet[i].valor;
	}

	
	// Grandes patronos
	bool listaVazia = true;
	cout << "\nGrandes Patronos\n";
	for (int i=0; i < contrib; i++)
		if (vet[i].valor >= 10000)
		{
			cout << vet[i].nome << " " << vet[i].valor << endl;
			listaVazia = false;
		}
	if (listaVazia)
		cout << "Nenhum\n";

	
	// Patronos
	listaVazia = true;
	cout << "\nPatronos\n";
	for (int i=0; i < contrib; i++)
		if (vet[i].valor < 10000)
		{
			cout << vet[i].nome << " " << vet[i].valor << endl;
			listaVazia = false;
		}
	if (listaVazia)
		cout << "Nenhum\n";
	
	delete [] vet;

    return 0;
}
