#include <iostream>
#include <fstream>
#include <string>
using namespace std;
string mensaje[100];
int N;
char opcion;
void guardar() // guardar, siempre es esta estructura si se va a guardar muchos mensajes o enteros
{
    ofstream archivo("mensaje.txt");
    if (archivo.is_open())
    {
        archivo << N << endl;
        for (int i = 0; i < N; i++)
        {
            archivo << mensaje[i] << endl;
        }

        archivo.close();
    }
}
void load() // cargar, siempre es esta estructura si se va a cargar muchos mensajes o enteros
{
    ifstream archivo("mensaje.txt");
    if (archivo.is_open())
    {
        archivo >> N;
        archivo.ignore();
        for (int i = 0; i < N; i++)
        {
            getline(archivo, mensaje[i]);
        }
        archivo.close();
       
    }
}
void mostrar() //muestra todos los mensajes 
{
    cout << "---Mensajes---" << endl;
    for (int i = 0; i < N; i++)
    {
        cout << mensaje[i] << " "<<endl;
    }
}
int main()
{
    do
    {
        load();
        system("cls");
        int M;
        cout << "Que quieres hacer?" << endl;
        cout << "1.Escribir mensaje" << endl;
        cout << "2.Cargar mensaje" << endl;
        cout << "3.Salir" << endl;
        cin >> M;
        if (cin.fail()) {
            cin.clear(); 
            cin.ignore(1000, '\n'); 
            cout << "Ingrese una opcion valida." << endl;
            continue; 
        }
        cin.ignore();
        switch (M)
        {
        case 1:
            system("cls");
            cout << "cuantos mensajes quieres escribir: ";
            cin >> N;
            cin.ignore();
            for (int i = 0; i < N; i++)
            {
                cout << "Escribe lo que quieras: ";
                getline(cin, mensaje[i]);
            }
            cout << "quieres guardar los datos?? S/s o N/n" << endl;
            cin >> opcion;
            switch (opcion)
            {
            case 'S':
            case 's':
                cout << "Guardando datos...\n";
                guardar();
                break;
            case 'N':
            case 'n':
                cout << "No se guardaran los datos.\n";
            default:
                cout << "Opcion no valida. Saliendo del programa.\n";
            }
            break;
        case 2:
            mostrar();
            system("pause");
            break;
        case 3:
            return false;
            break;
        default:
            cout <<"Ingrese una opcion valida." << endl;
            break;
        }
    } while (true);

    return 0;
}