#include <iostream>
using namespace std;
int main(){
    int N,suma=0;
    cout<<"Ingrese un numero: ";
    cin>>N;

    while(N>0){
        suma = suma + (N%10);
        N = N/10;
    }
    cout <<suma;
    return 0;
}