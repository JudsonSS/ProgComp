// usando referências para registros
#include <iostream>
using namespace std;

struct atleta
{
	int   acertos;
	int   tentativas;
	float percentual;
};

void calcular(atleta & atl);
void imprimir(const atleta & atl);
atleta & acumular(atleta & soma, const atleta & atl);

int main()
{
	atleta rick = { 13, 14 };
	atleta john = { 10, 16 };
	atleta mark = { 7, 9 };
	atleta time = { 0, 0 };
	
	calcular(rick);                        // rick é um atleta
	cout << "mostrar Rick:\n";
	imprimir(rick);

	acumular(time, rick);                  // não usa o retorno
	cout << "mostrar Time:\n";
	imprimir(time);

	cout << "John no Time:\n";
	imprimir(acumular(time, john));        // usa retorno como argumento

	atleta todos = acumular(time, mark);   // usa retorno em atribuição      
	cout << "Mark no Time:\n";
	imprimir(todos);
	cout << "Mostrar Time:\n";
	imprimir(time);

	return 0;
}

void calcular(atleta & atl)
{
	if (atl.tentativas != 0)
		atl.percentual = 100.0f * float(atl.acertos) / float(atl.tentativas);
	else
		atl.percentual = 0;
}

void imprimir(const atleta & atl)
{
	cout << "Acertos: " << atl.acertos << "  ";
	cout << " Tentativas: " << atl.tentativas << "  ";
	cout << " Percentual: " << atl.percentual << "\n\n";
}

atleta & acumular(atleta & soma, const atleta & atl)
{
	soma.tentativas += atl.tentativas;
	soma.acertos += atl.acertos;
	calcular(soma);
	return soma;
}

