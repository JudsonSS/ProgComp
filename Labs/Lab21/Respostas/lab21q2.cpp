#include <iostream>
using namespace std;

const double NIV1 = 5000;
const double NIV2 = 15000;
const double NIV3 = 35000;

const double TAXA1 = 0.10;
const double TAXA2 = 0.15;
const double TAXA3 = 0.20;

int main( )
{
    double renda;
    double imposto;

	cout << "Digite a sua renda (zero para sair): ";
	cin >> renda;

	while (renda != 0)
	{
		if (renda <= NIV1)
			imposto = 0;
		else if (renda <= NIV2)
			imposto = (renda - NIV1) * TAXA1;
		else if (renda <= NIV3)
			imposto = (NIV2 - NIV1) * TAXA1 + (renda - NIV2) * TAXA2;
		else
			imposto = (NIV2 - NIV1) * TAXA1 + (NIV3 - NIV2) * TAXA2 + (renda - NIV3) * TAXA3;

		cout << "Imposto devido: " <<  imposto << ".\n\n";

		cout << "Digite a sua renda (zero para sair): ";
		cin >> renda;
	}   

    return 0;
}