#include <iostream>
using namespace std;

int main()
{
	float a = 6.9f;
	float b = 0.9f;

	cout << boolalpha << (a - int(a) == b) << endl;

	return 0;
}
