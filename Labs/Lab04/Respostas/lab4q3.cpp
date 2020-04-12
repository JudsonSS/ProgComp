#include <iostream>
using namespace std;

void UmTres(void);
void Dois(void);

int main()
{
	cout << "Comecando agora:\n";
	UmTres();
	cout << "Pronto!\n";	

	return 0;
}

void UmTres(void)
{
	cout << "Um ";
	Dois();
	cout << "Tres\n";
}

void Dois(void)
{
	cout << "Dois ";
}