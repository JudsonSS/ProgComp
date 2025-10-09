#include <iostream>
#include <string>
using namespace std;

// template
template<typename T> void Print(T valor)
{
    std::cout << valor << std::endl;
}

// especializações do template
template <> void Print<const char*>(const char* valor)
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

int main()
{
    Print(42);
    Print(3.14);
    Print("Oi Mundo!");
    Print(std::string("Templates são poderosos!"));
    Print(true);
    Print('A');
}
