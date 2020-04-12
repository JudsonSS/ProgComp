#include <iostream>
#include <string>
using namespace std;
int main()
{
	char vet[20];
	string str;

	cout << "Comprimento de vet: " << strlen(vet) << endl;
	cout << "Comprimento de str: " << str.size() << endl;

	cout << "Entre com duas linhas de texto: " << endl;
	cin.getline(vet, 20);
	getline(cin, str);

	cout << "Comprimento de vet: " << strlen(vet) << endl;
	cout << "Comprimento de str: " << str.size() << endl;

	return 0;
}