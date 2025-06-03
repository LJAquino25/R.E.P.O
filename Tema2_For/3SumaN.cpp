#include <iostream>
using namespace std;
int main()
{
    int N, suma=0;
    cout << "Ingrese un numero" << endl;
    cin >> N;
    for (int i = 1; i <= N; ++i)
    {
        suma += i;
    }
    cout<<suma;
    return 0;
}