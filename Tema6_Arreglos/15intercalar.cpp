#include <iostream>
using namespace std;
int main()
{
    int n, n2, n3;
    cout << "Ingrese numero de arreglo 1: ";
    cin >> n;
    int numero1[n];
    cout << "Ingrese numero de arreglo 2: ";
    cin >> n2;
    int numero2[n2];
    n3 = n + n2;
    int numero3[n3];

    cout << "Arreglo 1:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "Numero " << i + 1 << " : ";
        cin >> numero1[i];
    }

    cout << "Arreglo 2:" << endl;
    for (int i = 0; i < n2; i++)
    {
        cout << "Numero " << i + 1 << " : ";
        cin >> numero2[i];
    }

    cout << "Fusionar intercalado" << endl;
    int j = 0;
    for (int i = 0; i < n; i++)
    {
        numero3[j++] = numero1[i];
        numero3[j++] = numero2[i];
    }
    for (int i = 0; i < n3; i++)
    {
        cout << "Arreglo intercalado: " << numero3[i] << endl;
    }
    return 0;
}