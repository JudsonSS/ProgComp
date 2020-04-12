#include <iostream>
using namespace std;

int main()
{
	short v1;
	int v2;
	long v3;
	long long v4;

	cout << "short:     " << sizeof v1 << " bytes" <<  endl;
	cout << "int:       " << sizeof v2 << " bytes" <<  endl;
	cout << "long:      " << sizeof v3 << " bytes" <<  endl;
	cout << "long long: " << sizeof v4 << " bytes" <<  endl;
	cout << endl;

	int total = sizeof v1 + sizeof v2 + sizeof v3 + sizeof v4;
	cout << "Total de bytes usados: " << total << endl;

	system("pause");
	return 0;
}