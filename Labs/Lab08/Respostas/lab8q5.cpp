#include <iostream>
#include <cfloat>
using namespace std;

int main()
{
	float f1 = 24980154.845f;             // extrapola o numero de digitos significativos da mantissa
	float f2 = 2e40f;                     // extrapola o maior expoente possivel

	double d1 = 293849384958473847.394;   // extrapola o numero de digitos significativos da mantissa
	double d2 = 2e315;                    // extrapola o maior expoente possivel

	cout.setf(ios_base::fixed, ios_base::floatfield);

	cout << "f1 deveria ser 24980154.845           = " << f1 << endl;
	cout << "f2 deveria ser 2e40                   = " << f2 << endl;
	cout << "d1 deveria ser 293849384958473847.394 = " << d1 << endl;
	cout << "d2 deveria ser 2e315                  = " << d2 << endl;

	return 0;
}