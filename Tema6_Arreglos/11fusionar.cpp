#include <iostream>
using namespace std;
int main()
{
    int n, n2, n3;
    cout << "Ingrese numero del arreglo 1: ";
    cin >> n;
    int letras1[n];
    cout << "Ingrese numero del arreglo 2: ";
    cin >> n2;
    int letras2[n2];

    n3 = n + n2;
    int letras3[n3];

    cout << "Arreglo 1: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "numero " << i + 1 << ": ";
        cin >> letras1[i];
    }
    cout << "Arreglo 2: " << endl;
    for (int i = 0; i < n2; i++)
    {
        cout << "numero " << i + 1 << ": ";
        cin >> letras2[i];
    }

    for (int i = 0; i < n; i++)
    {
        letras3[i] = letras1[i];
    }
    for (int i = n; i < n3; i++)
    {
        letras3[i] = letras2[i - n];
    }
    for (int i = 0; i < n3; i++)
    {
        cout << "Letra " << i + 1 << " : " << letras3[i] << endl;
    }
    return 0;
}