#include <iostream>
using namespace std;

void linha(char c);

int main()
{
	cout << "Digite um caractere: ";
	char ch;
	cin >> ch;

	cout << endl;
	
	linha(ch);
	cout << "Programando em C++" << endl;
	linha(ch);

	return 0;
}

void linha(char c)
{
	for (int i=0; i < 20; i++)
		cout << c;
	cout << endl;
}