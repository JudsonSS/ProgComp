#include <iostream>
using namespace std;

int main()
{
	double * p3 = new double[3];  // memória para três doubles
	p3[0] = 0.2;
	p3[1] = 0.5;
	p3[2] = 0.8;

	cout << "p3[1] = " << p3[1] << endl;
	p3 = p3 + 1;   // incrementa o ponteiro
	cout << "Agora p3[0] = " << p3[0] << endl;
	cout << "Agora p3[1] = " << p3[1] << endl;
	p3 = p3 - 1;   // retorna ao inicio

	delete[] p3;  // libera a memória

	return 0;
}