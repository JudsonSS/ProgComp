#include <iostream>
using namespace std;

#define black   "\033[7;37;40m"
#define yellow  "\033[1;33;44m"
#define green   "\033[32m"
#define red     "\033[4;31m"
#define foreg   "\033[38;5;154m"
#define backg   "\033[38;5;0;48;5;154m"
#define default "\033[m"

int main()
{
    cout << black << "Preto no Branco" << default << endl;
    cout << yellow << "Amarelo Intenso com Azul" << default << endl;
    cout << green << "Verde Normal" << default << endl;
    cout << red << "Vermelho Sublinhado" << default << endl;
    cout << foreg << "256 Cores" << default << endl;
    cout << backg << "256 Cores" << default << endl;

    return 0;
}