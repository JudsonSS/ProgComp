#include <iostream>
using namespace std;

// criando o tipo complexo
struct Complexo
{
	float real;
	float imag;
};

// protótipo das funções
// fazendo cin, cout, + e * funcionar com o tipo Complexo  
istream & operator>>(istream& , Complexo&);     // ler
ostream & operator<<(ostream& , Complexo);      // imprimir
Complexo operator+(Complexo, Complexo);			// soma
Complexo operator*(Complexo, Complexo);         // multiplica


int main()
{
	cout << "Digite o primeiro numero complexo: ";
	Complexo num1;
	cin >> num1;

	cout << "Digite um segundo numero complexo: ";
	Complexo num2;
	cin >> num2;

	cout << "A soma dos numeros: " << num1 + num2;

	cout << "A multiplicacao dos numeros: " << num1 * num2;

	return 0;
}

// ler
istream & operator>>(istream& is, Complexo& c)
{
	is >> c.real;
	is >> c.imag;
	char str;
	is >> str;
	return is;
}

// exibir
ostream & operator<<(ostream& os, Complexo c)
{
	os << c.real;
	// sempre exibe o sinal (+/-) antes do número 
	os.setf(ios::showpos);
	os << c.imag << "i" << endl;
	// desfaz exibição do sinal
	os.unsetf(ios::showpos);
	return os;
}

// somar
Complexo operator+(Complexo a, Complexo b)
{
	Complexo temp;
	temp.real = a.real + b.real;
	temp.imag = a.imag + b.imag;
	return temp;
}

// multiplicar
Complexo operator*(Complexo a, Complexo b)
{
	Complexo temp;
	temp.real = (a.real * b.real) - (a.imag * b.imag);
	temp.imag = (a.imag * b.real) + (a.real * b.imag);
	return temp;
}