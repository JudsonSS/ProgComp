#include <iostream>
using namespace std;

int main()
{
	char linha[80];
	int espacos = 0;
	cout << "Entre com uma linha de texto:\n";
	cin.getline(linha, 80);

	cout << "Linha completa:\n" << linha << endl;
	
	cout << "Linha ate o primeiro ponto:\n";
	for (int i = 0; linha[i] != '\0'; i++)
	{
		cout << linha[i];      // mostra caractere
		if (linha[i] == '.')
			break;             // encerra loop se for um ponto
		if (linha[i] != ' ')
			continue;          // pula o resto do loop se não for um espaço
		espacos++;
	}
	cout << "\n" << espacos << " espacos\n";

	return 0;
}