#include <iostream>
using namespace std;
struct Atleta {
    string nombre;
    string pais;
    double tiempo;
};
int main() {
    const int numAtletas = 5;
    Atleta atletas[numAtletas];
    //poner numero N de atletas que quiere registrar. 
    for (int i = 0; i < numAtletas; i++) {
        cout << "Ingrese el nombre del atleta " << (i + 1) << ": ";
        cin >> atletas[i].nombre;
        cout << "Ingrese el país del atleta " << (i + 1) << ": ";
        cin >> atletas[i].pais;
        cout << "Ingrese el tiempo del atleta " << (i + 1) << ": ";
        cin >> atletas[i].tiempo;
    }
    // Encontrar el atleta con el menor tiempo
    Atleta mejorAtleta = atletas[0];
    for (int i = 1; i < numAtletas; i++) {
        if (atletas[i].tiempo < mejorAtleta.tiempo) {
            mejorAtleta = atletas[i];
        }
    }

    cout << "El atleta con el menor tiempo es: " << mejorAtleta.nombre 
         << " de " << mejorAtleta.pais 
         << " con un tiempo de " << mejorAtleta.tiempo << " segundos." << endl;

    return 0;
}
