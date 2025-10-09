#include <iostream>
using namespace std;

template <typename T> 
T Maior(T a, T b) 
{
    return (a > b) ? a : b;
}

int main()
{
    int a = 10;
    int b = 20;

    float c = 2.5f;
    float d = 4.1f;

    char e = 'M';
    char f = 'N';

    cout << Maior(2, 5) << "\n";
    cout << Maior(a, b) << "\n";
    cout << Maior(c, d) << "\n";
    cout << Maior(e, f) << "\n";
}
