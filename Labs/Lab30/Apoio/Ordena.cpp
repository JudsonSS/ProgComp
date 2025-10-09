#include <algorithm>

template<typename T> void Ordenar(T* vet, int tam) 
{
    // implementação de um método de ordenação
    // para simplificar vamos chamar um já pronto
    std::sort(vet, vet + tam);
}

// instanciação explícita
template void Ordenar<int>(int* vet, int tam);
