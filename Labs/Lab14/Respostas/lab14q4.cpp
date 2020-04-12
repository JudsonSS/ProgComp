#include <iostream>
using namespace std;

union Color
{
	struct 
	{
		unsigned char a;
		unsigned char b;
		unsigned char g;
		unsigned char r;
	} rgba;

	unsigned coded;
};

void ReadRGBA(Color * pcolor);
void ReadInt32(Color * pcolor);
void ShowColor(Color * pcolor, bool type);

int main()
{
	cout << "Digite uma cor no formato\n";
	cout << "RGBA: ";
	Color frente;
	ReadRGBA(&frente);

	cout << "Int32: ";
	Color fundo;
	ReadInt32(&fundo);

	cout << "\nExibindo as cores em formatos invertidos:\n";
	ShowColor(&frente, false);
	ShowColor(&fundo, true);
}

void ReadRGBA(Color * pcolor)
{
	short r, g, b, a;
	cin >> r >> g >> b >> a;
	
	pcolor->rgba.r = unsigned char(r);
	pcolor->rgba.g = unsigned char(g);
	pcolor->rgba.b = unsigned char(b);
	pcolor->rgba.a = unsigned char(a);
}

void ReadInt32(Color * pcolor)
{
	cin >> pcolor->coded;
}

void ShowColor(Color * pcolor, bool type)
{
	if (type == true)
	{
		cout << "RGBA("
			<< int(pcolor->rgba.r) << ","
			<< int(pcolor->rgba.g) << ","
			<< int(pcolor->rgba.b) << ","
			<< int(pcolor->rgba.a) << ")"
			<< endl;
	}
	else
	{
		cout << pcolor->coded << endl;
	}
}
