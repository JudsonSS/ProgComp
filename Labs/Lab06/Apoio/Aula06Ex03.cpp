#include <iostream>
#include <climits>
using namespace std;

int main()
{
	short pedro = SHRT_MAX;
	unsigned short maria = SHRT_MAX;

	cout << "Pedro tem " << pedro << " Reais." << endl;
	cout << "Maria tem " << maria << " Reais." << endl;

	cout << endl << "Adicionando 1 Real para cada um..." << endl << endl;
	pedro = pedro + 1;
	maria = maria + 1;

	cout << "Agora Pedro tem " << pedro << " Reais." << endl;
	cout << "Agora Maria tem " << maria << " Reais." << endl;
	
	return 0;
}