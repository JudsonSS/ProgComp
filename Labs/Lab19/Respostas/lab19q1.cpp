#include <iostream>
using namespace std;

int main()
{
	int matriz[5][5] =
	{
		{38,51,50,56,98},
		{17,65,25,62,54},
		{23,23,64,45,92},
		{41,39,19,68,87},
		{65,10,12,22,13}
	};

	int soma = 0;

	for (int i=0; i < 5; i++)
		for (int j=0; j < 5; j++)
			soma += matriz[i][j];

	cout << "Media: " << soma / 25.0f << endl;

	return 0;
}