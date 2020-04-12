#include <iostream>
#include <cctype>
using namespace std;

inline int maximo(int a, int b);
inline int minimo(int a, int b);
inline int absoluto(int x);
inline char maiusculo(char ch);

int main()
{
	int y = -2;
	int z = 5;
	int w = 1;
	int min = minimo(absoluto(y), z);
	int max = maximo(min, w);
	cout << "Num: " << max << endl;
	cout << "Letra: " << maiusculo('a') << endl;

	return 0;
}

inline int maximo(int a, int b)
{
	return (a > b ? a : b);
}

inline int minimo(int a, int b)
{
	return (a < b ? a : b);
}

inline int absoluto(int x)
{
	return (x >= 0 ? x : -x);
}

inline char maiusculo(char ch)
{
	return (isupper(ch) ? ch : toupper(ch));
}
