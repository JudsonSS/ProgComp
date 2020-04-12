#include <iostream>
using namespace std;

int main()
{
	cout << "Entre com um valor inteiro: ";
	int passo;
	cin >> passo;

	cout << "Contando de " << passo << " em " << passo << ":\n";

	for (int i = 0; i < 100; i = i + passo)
		cout << i << endl;

	return 0;
}