#include <iostream>
using namespace std;

void contagem()
{
	static int cont = 0;
	cout << ++cont << "a chamada da funcao.\n";
}

int main()
{
	for (int i = 0; i < 5; ++i)
		contagem();

	return 0;
}