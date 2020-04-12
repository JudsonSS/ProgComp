#include <iostream>
using namespace std;

int main()
{
	cout << "Digite um ponto-flutuante: ";
	double num;
	cin >> num;

	cout << "Notacao padrao: " << num << endl;

	cout.setf(ios_base::scientific, ios_base::floatfield);
	cout << "Notacao cientifica: " << num << endl;

	cout.setf(ios_base::fixed, ios_base::floatfield);
	cout << "Notacao decimal: " << num << endl;

	return 0;
}