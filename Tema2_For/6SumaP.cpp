#include <iostream>
using namespace std;
int main()
{
    int N,suma=0;
    cout << "Ingrese un numero: ";
    cin >> N;

    for (int i = 1; i <= N; ++i)
    {
        if (i % 2 == 0)
        {
            suma += i;
        }
    }
    cout <<"Suma de numeros: "<<suma;
    return 0;
}