#include <iostream>
using namespace std;

const int TamVet = 16;  // declaração externa

int main()
{
	long long fatorial[TamVet];

	fatorial[1] = fatorial[0] = 1LL;

	for (int i = 2; i < TamVet; i++)
		fatorial[i] = i * fatorial[i - 1];

	for (int i = 0; i < TamVet; i++)
		cout << i << "! = " << fatorial[i] << endl;

	return 0;
}