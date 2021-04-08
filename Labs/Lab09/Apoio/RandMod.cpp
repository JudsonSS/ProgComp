#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    cout << "Entre com os valores min e max:\n";
    int min, max;
    cin >> min;
    cin >> max;

    cout << "Sorteando um valor nesta faixa:\n";
    int sorteio = min + rand() % (max - min + 1);
    cout << sorteio << endl;
}

