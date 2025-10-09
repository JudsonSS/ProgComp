#include <string>
#include "Print.h"

int main()
{
    Print(42);
    Print(3.14);
    Print("Oi Mundo!");
    Print(std::string("Templates são poderosos!"));
    Print(true);
    Print('A');
}