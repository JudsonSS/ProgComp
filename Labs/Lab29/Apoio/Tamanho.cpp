#include <iostream>
#include <cstring>
using namespace std;

unsigned tamanho(const char * str);
unsigned tamanho(unsigned num);

int main()
{
	const char * viagem = "Hawaii";   // string de teste
	unsigned n = 12345678;      // valor de teste

	cout << "Tamanho da string: ";
	cout << tamanho(viagem);
	cout << endl;

	cout << "Tamanho do numero: ";
	cout << tamanho(n);
	cout << endl;

	return 0;
}

unsigned tamanho(const char * str)
{
	unsigned i = 0;

	while (str[i])
		i++;
	return i;
}

unsigned tamanho(unsigned num)
{
	unsigned digitos = 1;

	while (num /= 10)
		digitos++;
	return digitos;
}
