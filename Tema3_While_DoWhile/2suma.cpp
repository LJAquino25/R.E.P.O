#include <iostream>
using namespace std;
int main(){
    int i=1;
    int suma=0;
    cout <<"Ingrese los numeros que quiera, el ultimo numero debe de ser 0: "<<endl;
    while(i!=0){
        cout<<"Numero: ";
        cin >>i;
        suma +=i;
    }
        cout <<"Suma: "<<suma;
    return 0;
}