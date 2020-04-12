#include <iostream>
using namespace std;

template <typename T>
T max5(T vet[], int n)
{
	T max = vet[0];
	for (int i = 1; i < n; ++i)
	{
		if (vet[i] > max)
			max = vet[i];
	}
	return max;
}

int main()
{
	int vetI[6] = { 2, 4, 3, 7, 6 , 1 };
	double vetD[4] = { 1.7, 4.9, 2.4, 3.6 };

	cout << "Max Int: " << max5(vetI, 6) << endl;
	cout << "Max Double: " << max5(vetD, 4) << endl;

	return 0;
}

