#include <iostream>
using namespace std;
int main()
{
	char ch;
	int espacos = 0;
	int total = 0;

	cin.get(ch);
	while (ch != '.')   // encerra no final da frase
	{
		if (ch == ' ')  // verifica se ch é um espaço
			++espacos;
		++total;        // total de caracteres
		cin.get(ch);
	}

	cout << espacos << " espacos e " << total;
	cout << " caracteres na frase.\n";

	return 0;
}
