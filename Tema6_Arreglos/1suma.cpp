#include <iostream>
using namespace std;
int main(){
    int suma=0;
    int numeros[5];
    cout<<"Ingrese 5 numero: "<<endl;
    for(int i = 0; i <5; i++){
        cout <<"numero: " <<i+1 <<": ";
        cin>>numeros[i];
    }
    for(int i = 0; i <5;i++){
        suma += numeros[i];
        
    }
    cout<<"total: "<<suma;
    return 0;
}