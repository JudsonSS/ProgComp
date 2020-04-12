#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
using namespace std;

int main()
{
	char vAnimal[20];
	char vFelino[20] = "jaguar";
	string sAnimal;
	string sFelino = "pantera";

	strcpy(vAnimal, vFelino);    // copia vetores de caracteres
	sAnimal = sFelino;           // copia strings
	
	strcat(vAnimal, "ibe");      // adiciona "ibe" ao final do vetor
	sAnimal = sAnimal + " rosa"; // adiciona " rosa" ao final da string

	cout << vAnimal << " contem " << strlen(vAnimal) << " caracteres.\n";
	cout << sAnimal << " contem " << sAnimal.size() << " caracteres.\n";

	return 0;
}
