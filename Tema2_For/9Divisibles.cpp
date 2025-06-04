#include <iostream>
using namespace std;
int main(){
    int N;
    int i=0;
    int suma=0;
    cout<<"Ingrese un numero: ";
    cin >>N;
    for(i;i>0;i--){
        suma +=(N/10);
        cout <<"La suma es: "<<suma;
    }
        
    return 0;
}