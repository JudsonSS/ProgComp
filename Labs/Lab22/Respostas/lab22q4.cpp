#include <iostream>
#include <cctype>
using namespace std;

int main()
{
	int vogal = 0, 
		consoante = 0, 
		outra = 0;

	cout << "Digite palavras (s para sair):" << endl;
	char palavra[50];
	cin >> palavra;

	while (!(palavra[0] == 's' && palavra[1] == '\0'))
	{

		if (isalpha(palavra[0])) // caractere é uma letra
		{
			switch (palavra[0])
			{
			case 'a':
			case 'A':
			case 'e':
			case 'E':
			case 'i':
			case 'I':
			case 'o':
			case 'O':
			case 'u':
			case 'U': vogal++; break;
			default : consoante++;
			}
		}
		else  // caractere não é uma letra
			outra++;

		cin >> palavra;
	}

	cout << vogal << " palavras comecam por vogal\n";
	cout << consoante << " palavras comecam por consoante\n";
	cout << outra << " outras palavras\n";
	
	return 0;
}