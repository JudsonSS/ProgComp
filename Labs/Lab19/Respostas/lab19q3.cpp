#include <iostream>
using namespace std;

int main()
{
	const int Linhas = 5;

	for (int i= 0; i < Linhas; i++)
	{
		for (int j=i; j < 4; j++)
			cout << ' ';

		for (int j=0; j < i; j++)
			cout << '$';

		cout << '$';

		for (int j=0; j < i; j++)
			cout << '$';

		for (int j=i; j < 4; j++)
			cout << ' ';		

		cout << endl;
	}	

	return 0;
}