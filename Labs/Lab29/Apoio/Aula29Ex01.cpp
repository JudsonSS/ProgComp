#include <iostream>
using namespace std;

void linha(int tam = 10, char ch = '-');

int main()
{
	linha();
	linha(20);
	linha(30, '*');
	linha('*');       // utilização errada

	return 0;
}

void linha(int tam, char ch)
{
	for (int i = 0; i < tam; ++i)
		cout << ch;
	cout << endl;
}
