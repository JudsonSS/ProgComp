#include <iostream>
using namespace std;

template <typename T>
T Maior(T a, T b)
{
    return (a > b) ? a : b;
}

// tente utilizar a instanciação explícita
// juntamente com o código comentado abaixo

// template double Maior<double>(double a, double b);

int main()
{
    cout << Maior(3, 7) << "\n";
    cout << Maior(3.0, 7.0) << "\n";
    //cout << Maior(3, 7.0) << "\n";
    cout << Maior<double>(3, 7.0) << "\n";
}
