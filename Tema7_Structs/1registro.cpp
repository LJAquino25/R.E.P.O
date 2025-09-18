#include <iostream>
#include <string>
using namespace std;
struct Estudiante
{
    string nombre;
    int edad;
    int promedio;
};
int main()
{
    int N;
    cout << "Cuantos estudiates desea ingresear:";
    cin >> N;
    Estudiante Estudiantes[N];
    for (int i = 0; i < N; i++)
    {
        cout << "Ingrese el nombre del estudiante: ";
        cin >> Estudiantes[i].nombre;
        cout << "Ingrese la edad del estudiante: ";
        cin >> Estudiantes[i].edad;
        cout << "Ingrese el promedio del estudiante: ";
        cin >> Estudiantes[i].promedio;
        cout << "========================================" << endl;
    }
    system("cls");
    for (int i = 0; i < N; i++)
    {
        cout << "Nombre: " << Estudiantes[i].nombre << endl;
        cout << "Edad: " << Estudiantes[i].edad << endl;
        cout << "Promedio: " << Estudiantes[i].promedio << endl;
        cout << "=======================================" << endl;
    }
    return 0;
}