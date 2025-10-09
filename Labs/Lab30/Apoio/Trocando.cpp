#include <iostream>
#include "Troca.h"
using namespace std;

int main()
{
    int i = 10;
    int j = 25;

    cout << "Originais: " << i << " " << j << "\n";
    Trocar(i, j);
    cout << "Trocados:  " << i << " " << j << "\n";
}