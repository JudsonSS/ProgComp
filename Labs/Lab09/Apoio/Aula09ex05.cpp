#include <iostream>
using namespace std;
int main()
{
	// cout.setf(ios_base::fixed, ios_base::floatfield);  
	cout << fixed;

	float tres = 3;        // int convertido para float
	int aposta = 3.9832;   // double convertido para int
	int debito = 7.2E12;   // resultado não definido

	cout << "tres = " << tres << endl;
	cout << "aposta = " << aposta << endl;
	cout << "debito = " << debito << endl;

	return 0;
}