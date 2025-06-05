#include <iostream>
using namespace std;
int main(){
    int N;
    int multiplicacion=1;
    cout<<"Ingrese tamaño del arreglo: ";
    cin>>N;
    int numeros[N];

    for(int i =0;i<N;i++){
        cout <<"Numero "<<i+1<<" : ";
        cin >>numeros[i];
    }
    for(int i=0;i<N;++i){
        multiplicacion = multiplicacion * numeros[i];
    }
    cout <<"Multiplicacion de todos los numeros: "<<multiplicacion;
    return 0;
}