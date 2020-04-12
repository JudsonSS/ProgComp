#include <iostream>
using namespace std;

enum { red, orange, yellow, green };

int main()
{
	cout << "Entre com o codigo da cor (0 a 3): ";
	int cor; 
	cin >> cor;

	while (cor >= red && cor <= green) {
		switch (cor) {
		case red: cout << "Seus labios eram vermelhos.\n"; break;
		case orange: cout << "Sua roupa era laranja.\n"; break;
		case yellow: cout << "Seus sapatos eram amarelos.\n"; break;
		case green: cout << "Seus olhos eram verdes.\n"; break;
		}
		cout << "Entre com o codigo da cor (0 a 3): ";
		cin >> cor;
	}

	cout << "Tchau!\n";

	return 0;
}