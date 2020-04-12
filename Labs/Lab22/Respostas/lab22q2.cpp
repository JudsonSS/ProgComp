#include <iostream>
#include <cctype>
using namespace std;

int main()
{
	cout << "Digite seu texto (@ para sair):\n";

	char ch;
	cin.get(ch);
	while (ch != '@')
	{
		if (!isdigit(ch))
		{
			if (islower(ch))
				ch = toupper(ch);
			else
				ch = tolower(ch);
			cout << ch;
		}
		cin.get(ch);
	}

	cout << endl;

	return 0;
}
