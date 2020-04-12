#include <iostream>
using namespace std;

void Linha(void);
void Pequena(void);
void Media(void);
void Grande(void);

int main()
{
	Pequena(); 
	Media();
	Grande();
	cout << "Programacao de Computadores" << endl;
	Grande(); 
	Media();
	Pequena();	

	return 0;
}

void Linha(void)
{
	cout << "----------";
}

void Pequena(void)
{
	Linha(); 
	cout << endl;
}

void Media(void)
{
	Linha(); 
	Linha(); 
	cout << endl;
}

void Grande(void)
{
	Linha(); 
	Linha(); 
	Linha();  
	cout << endl;
}