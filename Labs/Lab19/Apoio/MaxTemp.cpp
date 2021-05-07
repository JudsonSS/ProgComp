#include <iostream>
using namespace std;

const int Cids = 4;
const int Anos = 5;

int main()
{

	const char * cidades[Cids] =
	{ "Mossoro", "Caraubas", "Angicos", "Pau dos Ferros" };

	int maxtemp[Cids][Anos] =
	{
		{ 35, 28, 25, 20, 24 },    // valores para maxtemp[0]
		{ 15, 19, 23, 35, 32 },    // valores para maxtemp[1]
		{ 34, 36, 30, 31, 30 },    // valores para maxtemp[2]
		{ 31, 36, 38, 32, 26 }     // valores para maxtemp[3]
	};

	cout << "Temperaturas maximas dos ultimos anos:\n\n";

	for (int i = 0; i < Cids; ++i)
	{
		cout << cidades[i] << ":\t";
		for (int j = 0; j < Anos; ++j)
			cout << maxtemp[i][j] << "\t";
		cout << endl;
	}

	system("pause");
	return 0;
}
