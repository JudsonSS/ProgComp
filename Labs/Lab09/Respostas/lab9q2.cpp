#include <iostream>
using namespace std;

int main()
{
	cout << "Digite um ponto-flutuante: ";
	double num;
	cin >> num;
	
	cout << "Notacao padrao: " << num << endl;

	// cout.setf(ios_base::scientific, ios_base::floatfield);
	cout << scientific;   
	cout << "Notacao cientifica: " << num << endl;

	// cout.setf(ios_base::fixed, ios_base::floatfield);
	cout << fixed;
	// duas casas decimais após a vírgula
	cout.precision(2);    
	cout << "Notacao decimal: " << num << endl;

	system("pause");
	return 0;
}