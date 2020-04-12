#include <iostream>
using namespace std;

template <typename T>
T max5(T vet[])
{
	T max = vet[0];
	for (int i = 1; i < 5; ++i)
	{
		if (vet[i] > max)
			max = vet[i];
	}
	return max;
}

int main()
{
	int vetI[5] = { 2, 4, 3, 9, 6 };
	double vetD[5] = { 1.7, 4.9, 8.5, 2.4, 3.6 };

	cout << "Max Int: " << max5(vetI) << endl;
	cout << "Max Double: " << max5(vetD) << endl;

	return 0;
}

