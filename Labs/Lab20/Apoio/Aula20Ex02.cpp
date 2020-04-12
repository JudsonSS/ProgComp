#include <iostream>
using namespace std;
int main()
{
	char ch;
	cout << "Digite, que eu repito.\n";

	cin.get(ch);
	while (ch != '.')      // encerra no final da frase
	{
		if (ch == '\n')
			cout << ch;    // imprime a nova linha
		else
			cout << ++ch;  // imprime outro caractere
		cin.get(ch);
	}

	cout << "\nPor favor desculpe a confusao.\n";

	return 0;
}
