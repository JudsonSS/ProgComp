#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	char carro[50];
	int ano;
	float precoN;                  // preço normal
	float precoP;                  // preço promocional

	ofstream fout;                 // cria objeto para saída
	fout.open("carinfo.txt");      // associa com arquivo

	cout << "Entre com a marca e modelo do carro: ";
	cin.getline(carro, 50);
	cout << "Entre com o ano: ";
	cin >> ano;
	cout << "Digite o preco normal: ";
	cin >> precoN;
	precoP = 0.913f * precoN;

	// mostrando informações na tela
	cout.setf(ios_base::fixed, ios_base::floatfield);
	cout.precision(2);
	cout << "Marca e modelo: " << carro << endl;
	cout << "Ano: " << ano << endl;
	cout << "Preco normal: R$" << precoN << endl;
	cout << "Preco promocional: R$" << precoP << endl;

	// gravando informações no arquivo
	fout.setf(ios_base::fixed, ios_base::floatfield);
	fout.precision(2);
	fout << "Marca e modelo: " << carro << endl;
	fout << "Ano: " << ano << endl;
	fout << "Preco normal: R$" << precoN << endl;
	fout << "Preco promocional: R$" << precoP << endl;

	fout.close();

	return 0;
}