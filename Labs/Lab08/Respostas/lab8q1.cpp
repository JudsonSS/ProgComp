#include <iostream>
using namespace std;

float  imc(float, float);
double imc(double, double);

int main()
{
	// Dependendo dos valores de altura e peso, o resultado 
	// do IMC pode ter mais de 6 dígitos significativos.

	float  imc_float = imc(1.75f, 80.0f);
	double imc_double = imc(1.75, 80.0);

	cout << "IMC Float:  " << imc_float << endl;
	cout << "IMC Double: " << imc_double << endl;

	// Resta saber se o usuário precisa saber do seu índice
	// com uma precisão maior que 6 dígitos. Se for o caso,
	// deveria-se usar o tipo double. 

	cout << fixed;
	cout.precision(10);
	cout << "IMC Float:  " << imc_float << endl;
	cout << "IMC Double: " << imc_double << endl;

	return 0;
}

float imc(float alt, float pes)
{
	return pes / (alt * alt);
}

double imc(double alt, double pes)
{
	return pes / (alt * alt);
}