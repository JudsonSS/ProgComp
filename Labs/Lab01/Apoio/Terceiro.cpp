// terceiro.cpp – erros de semântica
#include <iostream>
using namespace std;

int main()
{
	int dias;      // declara uma variável inteira
    cout << "Numero de Dias: ";
    cin >> dias;   // lê um valor para a variável
	
	int horas = dias * 60;
    cout << dias << " dias tem " << horas << " horas." << endl;
    
    return 0;
}
