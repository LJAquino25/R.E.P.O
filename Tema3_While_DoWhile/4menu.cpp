#include <iostream>
using namespace std;
int main(){
    int opcion;
    do
    {
        cout<<"Nuevo archivo"<<endl;
        cout<<"Nueva imagen"<<endl;
        cout<<"Nuevo audio"<<endl;
        cout<<"Nuevo programa"<<endl;
        cout<<"Salir"<<endl;
        cout<<"Opcion: ";
        cin>>opcion;
        
        switch (opcion)
        {
        case 1:
            cout<<"nuevo programa"<<endl;
            break;
        case 2:
            cout<<"Nueva imagen"<<endl;
            break;
        case 3:
            cout<<"nuevo audio"<<endl;
            break;
        case 4:
            cout<<"nuevo programa"<<endl;
            break;
        }
    } while (opcion!=5);
    cout <<"que tenga buen dia"<<endl;
       
    return 0;
}