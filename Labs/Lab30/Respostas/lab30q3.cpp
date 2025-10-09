#include <iostream>
using namespace std;

struct Caixa
{
    float altura;
    float largura;
    float comprimento;
};

template <typename T>
T Maior(T a, T b)
{
    return (a > b) ? a : b;
}

template <> Caixa Maior<Caixa>(Caixa a, Caixa b)
{
    float volumeA = a.altura * a.largura * a.comprimento;
    float volumeB = b.altura * b.largura * b.comprimento;
	return (volumeA > volumeB) ? a : b;
}

ostream & operator<<(ostream& os, const Caixa& caixa)
{
    os << caixa.altura  << ' ' << caixa.largura << ' ' << caixa.comprimento << '\n';
    return os;
}

int main()
{
    int a = 10;
    int b = 20;

    float c = 2.5f;
    float d = 4.1f;

    char e = 'M';
    char f = 'N';

	Caixa caixa1 = { 2.0f, 3.0f, 4.0f }; // Volume = 24
	Caixa caixa2 = { 1.0f, 5.0f, 6.0f }; // Volume = 30

    cout << Maior(2, 5) << "\n";
    cout << Maior(a, b) << "\n";
    cout << Maior(c, d) << "\n";
    cout << Maior(e, f) << "\n";
    cout << Maior(caixa1, caixa2) << "\n";
}
