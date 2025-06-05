#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n,pos;
    cout<<"Ingrese la cantidad de elementos: ";
    cin>>n;
    int numeros[n];


    cout<<"Ingrese "<<n <<" numeros: "<<endl;
    for(int i = 0; i <n; i++){
        cout <<"numero " <<i+1 <<": ";
        cin>>numeros[i];
    }


    cout<<"Que numero desea eliminar de 1 al " <<n <<" : ";
    cin>>pos;
    if(pos>n){
        cout<<"Posicion ingresada fuera del rango";
        for(int i=0;i<n;i++){
            cout<<"El elemento en la posicion "<<i<<" del arreglo es: "<<numeros[i]<<endl;
        }
    }else{
        int eliminar;
        eliminar=numeros[pos];

        for (int i=0;i<n;i++){
            if(i==pos){
                while(i<n){
                    numeros[i]=numeros[i+1]; //reposicionar 
                    i++;
                }
                break;
            }
        }
        n=n-1;
        for(int i=0;i<n;i++){
            cout<<"Elementos en la posicion "<<i<<" del arreglo es: "<<numeros[i]<<endl;
        }   
        cout <<endl;
        cout<<"Elemento eliminado es: "<<eliminar;
    }
    return 0;
}