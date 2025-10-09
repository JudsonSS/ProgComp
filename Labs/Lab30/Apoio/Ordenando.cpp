#include "Ordena.h"
#include <iostream>

int main() 
{
    int vetor[] = { 5, 3, 2, 4, 1 };

    Ordenar(vetor, 5);  // Usa a instância explícita para int

    for (int i : vetor)
        std::cout << i << " ";
}
