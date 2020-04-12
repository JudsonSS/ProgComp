#include <iostream>
using namespace std;

int main()
{
	cout << left; cout.width(10); cout << "Produto";  cout << right; cout.width(6); cout << "Quant"; cout.width(8); cout << "Valor" << endl;
	cout << left; cout.width(10); cout << "-------";  cout << right; cout.width(6); cout << "-----"; cout.width(8); cout << "-----" << endl;
	cout << left; cout.width(10); cout << "Abacaxi";  cout << right; cout.width(6); cout << "2.5";   cout.width(8); cout << "1.99" << endl;
	cout << left; cout.width(10); cout << "Cenoura";  cout << right; cout.width(6); cout << "4.6";   cout.width(8); cout << "5.90" << endl;
	cout << left; cout.width(10); cout << "Limao";    cout << right; cout.width(6); cout << "20.5";  cout.width(8); cout << "10.40" << endl;
	cout << left; cout.width(10); cout << "Maca";     cout << right; cout.width(6); cout << "345.0"; cout.width(8); cout << "120.30" << endl;
	cout << left; cout.width(10); cout << "Goiaba";   cout << right; cout.width(6); cout << "20.5";  cout.width(8); cout << "56.00" << endl;
	 
    return 0;
}
