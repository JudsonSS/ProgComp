#include <iostream>
using namespace std;

void imprimir(const char * str, bool chamadas = false);

int main()
{
	imprimir("Vamos ");
	imprimir("aprender ");
	imprimir("C++ ", true);
	imprimir("\n");

	return 0;
}

void imprimir(const char * str, bool chamadas)
{
	static int cont = 0;
	cout << str;
	++cont;
	
	if (chamadas)
	{
		for (int i = 1; i < cont; ++i)
			cout << str;
	}
}
