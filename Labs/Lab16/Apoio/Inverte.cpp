#include <iostream>
using namespace std;

// protótipo da função
void inverte(int[], int);

int main()
{
	int nums[5] = { 40, 50, 60, 70, 80 };
	
	// chamada da função
	inverte(nums, 5);

	return 0;
}

// definição da função
void inverte(int vet[], int tam)
{
	for (int i = tam - 1; i >= 0; i--)
		cout << vet[i] << " ";
	cout << endl;
}