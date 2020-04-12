#include <iostream>
using namespace std;

int main()
{
	int n[10] = {0,1,0,0,1,0,1,1,1,1};

	float resultado = 0;

	for (int i=0; i <= 9; i++)
		resultado += n[i];

	cout << "Resultado: " << resultado << endl;

	return 0;
}