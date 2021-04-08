#include <iostream>
using namespace std;

int main()
{
	float f = 6.1;
	cout << f << endl;

	cout << fixed;
	cout.precision(8);
	cout << "f = " << f << endl;

	return 0;
}
