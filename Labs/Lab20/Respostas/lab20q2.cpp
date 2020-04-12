#include <iostream>
using namespace std;

int main()
{
	cout << "Digite valores para a, b e c ( \"a\" maior que 1 ):\n";
	int a, b, c;
	cin >> a >> b >> c;

	int soma = 0;
	for (int i = b; i <= c; i++)
		if (i % a == 0)
			soma += i;

	cout << "A soma e igual a " << soma << endl;
	
    return 0;
}
