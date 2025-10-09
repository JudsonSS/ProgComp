#include "Controle.h"
#include <iostream>

int main() 
{
    int vetor[] = { 5, 3, 2, 4, 1 };
    //float vetor[] = { 5.0f, 3.0f, 2.0f, 4.0f, 1.0f };
    //char vetor[] = { '5', '3', '2', '4', '1' };
    //long vetor[] = { 5, 3, 2, 4, 1 };

    Ordenar(vetor, 5);  // Usa a instância explícita para int

    for (auto & i : vetor)
        std::cout << i << " ";
}
