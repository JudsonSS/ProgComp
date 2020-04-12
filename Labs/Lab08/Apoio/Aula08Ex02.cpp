#include <iostream>
using namespace std;
int main()
{
	// imprime números sempre com 6 casas decimais
	cout.setf(ios_base::fixed, ios_base::floatfield);

	float  fltvar = 10.0 / 3.0;     // bom para até 6 dígitos
	double dblvar = 10.0 / 3.0;     // bom para até 15 dígitos
	float  milhao = 1.0e6;

	cout << "float var = " << fltvar;
	cout << ", vezes um milhao = " << milhao * fltvar << endl;
	cout << "double var = " << dblvar;
	cout << ", vezes um milhao = " << milhao * dblvar << endl;

	return 0;
}
