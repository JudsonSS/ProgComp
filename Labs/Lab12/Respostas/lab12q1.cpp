#include <iostream>
using namespace std;

struct chocolate
{
	char  marca[25];
	float peso;
	int   calorias;
};

int main()
{
	chocolate lanche = {"Charge", 2.3, 350};

	cout << lanche.marca << endl;
	cout << lanche.peso << endl;
	cout << lanche.calorias << endl;

	return 0;
}