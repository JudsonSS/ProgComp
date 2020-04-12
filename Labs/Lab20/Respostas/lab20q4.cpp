#include <iostream>
using namespace std;
const int NumAulas = 66;
const float MaxPercFaltas = 0.25;

int main()
{
	cout << "Digite as notas e frequencia na disciplina\n"; 
    cout << "Nota 1: ";
	float n1; cin >> n1;
	cout << "Nota 2: ";
	float n2; cin >> n2;
	cout << "Nota 3: ";
	float n3; cin >> n3;
	cout << "Faltas: ";
	int faltas; 
	cin >> faltas;

	float mp = (n1 + n2 + n3) / 3;

	if (faltas > MaxPercFaltas * NumAulas)
		cout << "Reprovado por falta\n";
	else if (mp >= 7)
		cout << "Aprovado\n";
	else if (mp >= 3.5 && mp < 7)
	{
		cout << "4a Prova\n";
		cout << "Digite sua 4a nota: ";
		float n4; 
		cin >> n4;

		if ((mp * 0.7 + n4 * 0.3) >= 5)
			cout << "Aprovado\n";
		else
			cout << "Reprovado\n";
	}
	else
		cout << "Reprovado\n";
	
    return 0;
}
