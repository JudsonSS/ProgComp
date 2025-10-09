#include <iostream>
using namespace std;

template <typename T>
T Max(T vet[], int n)
{
    T maior = vet[0];
    for (int i = 1; i < n; i++)
    {
        if (vet[i] > maior)
        {
            maior = vet[i];
        }
    }
    return maior;
}

int main()
{
    int nums[5] = { 3, 5, 2, 8, 1 };
    cout << "Maior inteiro: " << Max(nums, 5) << endl;

    double fracs[5] = { 3.5, 2.1, 4.8, 1.9, 5.2 };
    cout << "Maior double: " << Max(fracs, 5) << endl;
}