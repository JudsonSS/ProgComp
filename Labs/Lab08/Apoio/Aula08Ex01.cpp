#include <iostream>
#include <cfloat>
using namespace std;
int main()
{
	cout << "Numero de Digitos Significativos" << endl;
	cout << "float:       " << FLT_DIG << endl;
	cout << "double:      " << DBL_DIG << endl;
	cout << "long double: " << LDBL_DIG << endl;

	cout << "Valores Maximos do Expoente" << endl;
	cout << "float:       " << FLT_MAX_10_EXP << endl;
	cout << "double:      " << DBL_MAX_10_EXP << endl;
	cout << "long double: " << LDBL_MAX_10_EXP << endl;

	cout << "Numero de Bits na Mantissa" << endl;
	cout << "float:       " << FLT_MANT_DIG << endl;
	cout << "double:      " << DBL_MANT_DIG << endl;
	cout << "long double: " << LDBL_MANT_DIG << endl;

	return 0;
}


