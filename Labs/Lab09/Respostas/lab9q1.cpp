#include <iostream>
using namespace std;

int main()
{
	double x1, x2;
	cout << "Digite o valor x1: ";
	cin >> x1;
	cout << "Digite o valor x2: ";
	cin >> x2;

	int val = int(x1) + int(x2);
	
	cout << "A adicao inteira dos valores = " << val << endl;

	return 0;
}