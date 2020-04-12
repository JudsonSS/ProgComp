// charespecial.cpp – caracteres especiais 
#include <iostream>
using namespace std;

int main()
{
	char alarme = '\a';   // caractere beep
	int senha;

	cout << "Digite a senha: ________\b\b\b\b\b\b\b\b";
	cin >> senha;

	cout << alarme << "Sua senha foi roubada!\a\n";
	cout << "Joaozinho \"O Hacker\"\nesteve aqui!\n";

	return 0;
}
