#include <iostream>
using namespace std;
int main (){
    int Numero;
    
    do{
        cout <<"Ingrese un numero del 1 al 10: ";
        cin >>Numero;
        if(Numero<6 || Numero >6){
            cout<<"Sigue intentando"<<endl;
        }
    }while (Numero != 6);
        cout <<"Felicidades"<<endl;
    return 0;
}