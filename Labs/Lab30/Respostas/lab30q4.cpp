#include <iostream>
using namespace std;

int main()
{
    int g(int x);
    float m = 5.5f;
    float& rm = m;

	decltype(m) v1 = m;    // float v1 = m;
	decltype(rm) v2 = m;   // float& v2 = m;
	decltype((m)) v3 = m;  // float& v3 = m; (observe os parênteses extra)
	decltype(g(100)) v4;   // int v4; (o tipo de retorno da função g)
	decltype(2.0 * m) v5;  // double v5; (o tipo da expressão 2.0 * m)
}
