// Funções com parâmetros tipo string
#include <iostream>
using namespace std;

int CharEmString(char ch, const char * str);

int main()
{
	char espantado[15] = "uau!";             // string em vetor
	const char * admirado = "ulalalala!";    // admirado aponta para string 

	int nu = CharEmString('u', espantado);
	int na = CharEmString('a', admirado);

	cout << nu << " caracteres u em " << espantado << "\n";
	cout << na << " caracteres a em " << admirado << "\n";

	return 0;
}

int CharEmString(char ch, const char * str)
{
	int cont = 0;

	while (*str)    // encerra quando str é '\0'
	{
		if (*str == ch)
			cont++;
		str++;       // move ponteiro para o próximo char
	}
	return cont;
}

