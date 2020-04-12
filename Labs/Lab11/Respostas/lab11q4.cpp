#include <iostream>
using namespace std;

int main()
{
	char nome[] = "C++ Primer Plus";

	cout << "A palavra e: " << nome << endl;
	cout << "Numero de caracteres: " << strlen(nome) << endl;
	cout << "Espaco ocupado em bytes: " << sizeof(nome) << endl;

	return 0;
}