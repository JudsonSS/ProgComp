#include <iostream>
using namespace std;

unsigned char ligarBit(unsigned char, int);
unsigned char desligarBit(unsigned char, int);
bool testarBit(unsigned char, int);

int main()
{
	unsigned char ch = 1;
	
	cout << testarBit(ch, 7);
	cout << testarBit(ch, 6);
	cout << testarBit(ch, 5);
	cout << testarBit(ch, 4);
	cout << testarBit(ch, 3);
	cout << testarBit(ch, 2);
	cout << testarBit(ch, 1);
	cout << testarBit(ch, 0);
	cout << endl;

	ch = desligarBit(ch, 0);
	cout << testarBit(ch, 7);
	cout << testarBit(ch, 6);
	cout << testarBit(ch, 5);
	cout << testarBit(ch, 4);
	cout << testarBit(ch, 3);
	cout << testarBit(ch, 2);
	cout << testarBit(ch, 1);
	cout << testarBit(ch, 0);
	cout << endl;
	
	ch = ligarBit(ch, 0);
	cout << testarBit(ch, 7);
	cout << testarBit(ch, 6);
	cout << testarBit(ch, 5);
	cout << testarBit(ch, 4);
	cout << testarBit(ch, 3);
	cout << testarBit(ch, 2);
	cout << testarBit(ch, 1);
	cout << testarBit(ch, 0);
	cout << endl;

	return 0;
}


unsigned char ligarBit(unsigned char flag, int bit)
{
	return flag | (1 << bit);
}

unsigned char desligarBit(unsigned char flag, int bit)
{
	return flag & ~(1 << bit);
}

bool testarBit(unsigned char flag, int bit)
{
	if (flag & (1 << bit))
		return true;
	else
		return false;
}