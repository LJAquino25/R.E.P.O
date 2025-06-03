#include <iostream>
using namespace std;
int main(){
    int FAC= 0,N,P=1;
    cout <<"Ingrese un numero: ";
    cin >>N;
    for(int i=1; i<=N; ++i){
        FAC= P*= i;
    }
    cout <<FAC;
    return 0;
}