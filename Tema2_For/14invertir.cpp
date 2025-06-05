#include <iostream>
#include <string>
using namespace std;

int main() {
    int x;
    cout << "Ingrese un numero: ";
    cin >> x;

    string str = to_string(x); // pasar de un entero a un string  
    string invertido = "";      //al guardarlo se guarda en un arreglo por eso se usa for para ir haciendo el proceso

    for (int i = str.length() - 1; i >= 0; i--) {
        invertido += str[i];
    }

    cout << "Numero invertido: " << invertido << endl;

    return 0;
}
