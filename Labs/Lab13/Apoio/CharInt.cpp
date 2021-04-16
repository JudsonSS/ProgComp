#include <iostream>
using namespace std;

union CharInt
{
	short num;
	char  ch;
};

int main()
{
	CharInt val = {0};

	cout << "Digite um caractere: ";
	cin >> val.ch;

	cout << "Codigo ASCII: ";
	cout << val.num << endl;

	return 0;
}
