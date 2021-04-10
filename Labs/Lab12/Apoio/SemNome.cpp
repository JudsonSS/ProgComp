#include <iostream>
using namespace std;

int main()
{
    struct
    {
        int x;
        int y;
    } 
    ponto;

    cout << "Entre com as coordenadas do ponto: \n";
    cin >> ponto.x;
    cin >> ponto.y;

    cout << "O ponto se encontra na posição ("
        << ponto.x << ","
        << ponto.y << ")\n";
}
