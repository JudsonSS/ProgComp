#include <iostream>
#include <climits>
#define ZERO 0
using namespace std;
int main()
{
	short pedro = ZERO;
	unsigned short maria = ZERO;

	cout << "Pedro tem " << pedro << " Reais." << endl;
	cout << "Maria tem " << maria << " Reais." << endl;

	cout << endl << "Tirando 1 Real de cada um..." << endl << endl;
	pedro = pedro - 1;
	maria = maria - 1;

	cout << "Agora Pedro tem " << pedro << " Reais." << endl;
	cout << "Agora Maria tem " << maria << " Reais." << endl;
	
	return 0;
}