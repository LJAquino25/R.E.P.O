//Conversión de Base
//Solicita un número decimal y convierte su representación a binario usando while.
#include <iostream>
using namespace std;
int main(){
    int N,residuo,bin,positivo;
    cout <<"Ingrese el numero a convertir: ";
    cin>>N;
    while (N>0)
    {
        residuo=N%2;
        cout<<residuo;
        N = N/2;
    } 
    return 0;
}