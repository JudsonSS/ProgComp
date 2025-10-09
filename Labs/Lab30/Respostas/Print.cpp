#include <iostream>
#include <string>

template<typename T>
void Print(T valor)
{
    std::cout << valor << std::endl;
}

// instanciações explícitas do template
template void Print<int>(int valor);
template void Print<double>(double valor);

// especializações do template
template <> void Print<const char*>(const char* valor)
{
    std::cout << "\"" << valor << "\"" << std::endl;
}

template <> void Print<std::string>(std::string valor)
{
    std::cout << "\"" << valor << "\"" << std::endl;
}

template <> void Print<bool>(bool valor)
{
    std::cout << (valor ? "verdadeiro" : "falso") << std::endl;
}

template <> void Print<char>(char valor)
{
    std::cout << "'" << valor << "'" << std::endl;
}
