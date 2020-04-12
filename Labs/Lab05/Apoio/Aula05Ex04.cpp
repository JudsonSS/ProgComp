#include <iostream>
using namespace std;

void local(void);

int x = 1, y = 2;  // variáveis globais

int main()
{
	cout << "x antes:  " << x << ", y antes:  " << y << endl;
	local();
	cout << "x depois: " << x << ", y depois: " << y << endl;

	return 0;
}

void local(void)
{
	int y;   // variável local
	x = 3;
	y = 3;
	cout << "x dentro: " << x << ", y dentro: " << y << endl;
}
