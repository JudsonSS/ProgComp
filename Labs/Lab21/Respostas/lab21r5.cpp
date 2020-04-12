#include <iostream>
using namespace std;

int main()
{
    // De Morgan's Law
    // !(X && Y && Z) == !X || !Y || !Z
    
    int n = 0;
    while (n % 3 != 2 || n % 5 != 3 || n % 7 != 4)
        n++;
    cout << n << endl;
   
}