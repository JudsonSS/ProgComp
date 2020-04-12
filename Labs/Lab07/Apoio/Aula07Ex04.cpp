// booleano.cpp – tipo booleano
#include <iostream>
using namespace std;

int main()
{
	bool buzinar = false;   // buzina desligada			
	cout << "Buzinar? ";
	cin >> buzinar;         // leitura de um booleano

	if (buzinar == true)
		cout << "\a\a\a\a\a";
	else
		cout << "Silencio!" << endl;

	return 0;
}
