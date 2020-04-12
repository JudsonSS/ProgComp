#include <iostream>
using namespace std;

int main()
{
	int nota[5] = { 10, 10, 10, 9, 7 };

	cout << "Fazendo da maneira certa:\n";
	int i;
	for (i = 0; nota[i] == 10; i++)
		cout << "Nota " << i << " e um 10\n";

	cout << "Fazendo da forma errada:\n";
	for (i = 0; nota[i] = 10; i++)
		cout << "Nota " << i << " e um 10\n";

	return 0;
}