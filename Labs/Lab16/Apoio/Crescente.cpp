#include <iostream>
using namespace std;

// protótipo da função
void crescente(int a, int b);

int main()
{
	// chamada da função
	crescente(3, 9);

	return 0;
}

// definição da função
void crescente(int a, int b)
{
	for (int i = a; i <= b; i++)
		cout << i << " ";
	cout << endl;
}