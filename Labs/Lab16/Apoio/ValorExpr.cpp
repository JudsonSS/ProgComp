#include <iostream>
using namespace std;
int main()
{
	int x;

	cout << "A expressao x = 100 tem o valor ";
	cout << (x = 100) << endl;
	cout << "Agora x = " << x << endl;
	cout << "A expressao x < 3 tem o valor ";
	cout << (x < 3) << endl;
	cout << "A expressao x > 3 tem o valor ";
	cout << (x > 3) << endl;

	// cout.setf(ios_base::boolalpha);
	cout << boolalpha;
	cout << "A expressao x < 3 tem o valor ";
	cout << (x < 3) << endl;
	cout << "A expressao x > 3 tem o valor ";
	cout << (x > 3) << endl;

	return 0;
}