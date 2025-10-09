
template <typename T>
void Trocar(T& a, T& b)
{
    T temp;
    temp = a;
    a = b;
    b = temp;
}