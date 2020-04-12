#include <iostream>
using namespace std;

void asciiCode(int);

int main()
{
	asciiCode(80);
	asciiCode(114);
	asciiCode(111);
	asciiCode(103);
	asciiCode(67);
	asciiCode(111);
	asciiCode(109);
	asciiCode(112);
	cout << endl;

	return 0;
}

void asciiCode(int n)
{
	char ch = n;
	cout << ch;
}