#include <iostream>
using namespace std;

int main()
{
	char letra = 'A';
	char * ptr = &letra;
	*ptr = 'B';

	cout << *ptr << endl;
	cout << letra << endl;
}
