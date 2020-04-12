#include <iostream>
#include <vector>    // C++98
#include <array>     // C++11
using namespace std;

int main()
{
	int A[3] = { 2, 5, 6 };

	vector<int> B(3);
	B[0] = 2;    // não há uma inicialização simples em C++98
	B[1] = 5;
	B[2] = 6;

	array<int, 5> C = { 2, 5, 6, 8, 9 };  // inicialização em C++11

	cout << A[2] << " " << B[2] << " " << C[2] << endl;
}
