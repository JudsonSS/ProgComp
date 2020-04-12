#include <iostream> 
using namespace std; 

// ---------------------------------------
// protótipos

void feliz(void); 
void natal(void); 
void anonovo(void);

// ---------------------------------------
// função principal

int main() 
{ 
	cout << "Eu desejo a todos um ";    
	feliz();    
	natal();    
	cout << "e um ";    
	feliz();    
	anonovo();
	cout << endl;

	return 0; 
}

// ---------------------------------------
// definição das funções auxiliares

void feliz(void) 
{ 
	cout << "Feliz "; 
}

void natal(void) 
{ 
	cout << "Natal "; 
}

void anonovo(void)
{
	cout << "Ano Novo ";
}

// ---------------------------------------