#include <fstream>
using namespace std;

int main()
{
	ofstream fout;
	fout.open("valores.dat", ios_base::out | ios_base::binary);

	const unsigned short TamVet = 3;
	long vet[TamVet] = { 38, 42, -51 };

	// escreve quantidade de elementos
	fout.write((char *)&TamVet, sizeof(unsigned short));

	// escreve elementos do vetor
	for (unsigned short i = 0; i < TamVet; ++i)
		fout.write((char *)&vet[i], sizeof(long));
	
	fout.close();
	
	return 0;
}

