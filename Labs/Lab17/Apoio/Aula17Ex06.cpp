#include <iostream>
using namespace std;

int main()
{
	cout << "Tabuada do Vezes\n\n";

	for (int i = 1; i <= 10; ++i)
	{
		for (int j = 1; j <= 10; ++j)
			cout << i << " x " << j << " = " << i * j << "\n";
		cout << endl;
	}

	return 0;
}