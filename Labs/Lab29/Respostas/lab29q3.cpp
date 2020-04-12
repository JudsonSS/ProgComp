#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

struct String
{
	char * str;   // ponteiro para a string
	int   comp;   // comprimento da string (sem contar '\0')
};

// protótipos para ajustar(), mostrar() e mostrar()
void ajustar(String & string, char vetchar[]);
void mostrar(String & string, int n = 1);
void mostrar(const char * str, int n = 1);

int main()
{
	String msg;
	char teste[] = "Realidade de ponteiros e strings\n";

	ajustar(msg, teste);	// primeiro argumento é uma referência
							// aloca espaço para guardar cópia de teste
							// ajusta o membro str de msg para apontar 
							// para novo bloco, copia teste para o novo 
							// bloco e ajusta o membro comp

	mostrar(msg);			// mostra o membro string uma vez
	mostrar(msg, 2);		// mostra o membro string duas vezes
	teste[0] = 'D';
	teste[1] = 'u';
	mostrar(teste);			// mostra a string uma vez
	mostrar(teste, 3);		// mostra a string três vezes
	mostrar("Pronto!");

	delete[] msg.str;
	return 0;
}

void ajustar(String & string, char vetchar[])
{
	string.comp = strlen(vetchar);
	string.str = new char[string.comp+1];
	strcpy(string.str, vetchar);
}

void mostrar(String & string, int n)
{
	for (int i = 0; i < n; ++i)
		cout << string.str;
}

void mostrar(const char * str, int n)
{
	for (int i = 0; i < n; ++i)
		cout << str;
}
