// cria uma especialização de um template
#include <iostream>
using namespace std;

struct Loja
{
    char nome[20];
    double aluguel;
    int piso;
};

template <typename T> void Trocar(T& a, T& b)
{
    T temp;
    temp = a;
    a = b;
    b = temp;
}

template <> void Trocar(Loja& a, Loja& b)
{
    Loja temp;
    temp = a; // não modifica o nome da loja
    a.aluguel = b.aluguel;
    a.piso = b.piso;
    b.aluguel = temp.aluguel;
    b.piso = temp.piso;
}

void Exibir(Loja& loja)
{
    cout << loja.nome << " "
         << loja.aluguel << " "
         << loja.piso << "\n";
}

int main() 
{
    int num = 10;
    int val = 15;

    cout << "Originais:\n" << num << " " << val << endl;
    Trocar(num, val);
    cout << "Trocados:\n" << num << " " << val << endl;
    
    Loja roupas = { "Roupas", 2100, 4 };
    Loja livros = { "Livros", 1800, 1 };
    
    cout << "\nOriginais:\n"; Exibir(roupas); Exibir(livros);
    Trocar(roupas, livros);
    cout << "\nTrocados:\n";  Exibir(roupas); Exibir(livros);
}
