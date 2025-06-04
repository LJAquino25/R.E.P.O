#include <iostream>
using namespace std;
int main(){
    int numeros[5];
    int mayor=0; //se inicializan en cero por si hay datos basura
    int menor=0;
    int i=0; // 
    cout <<"Ingrese 5 numeros: "<<endl;
    for(i; i <5; i++){
        cout <<"numero: " <<i+1 <<": ";
        cin>>numeros[i];
        if(0==i){ //simples palabras una conparacion entre los mismos numero del arreglo para ver cual es mayor o menor
            mayor=numeros[i];
            menor=numeros[i];
        }else if(numeros[i]>mayor){
            mayor=numeros[i];
        }else if(numeros[i]<menor){
            menor=numeros[i];
        }
    }
    cout <<"Mayor es: "<<mayor<<endl;
    cout<<"Menor es: "<<menor<<endl;
    return 0;
}