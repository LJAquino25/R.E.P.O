#include <iostream>
using namespace std;
int main(){
    int N,tabla;
    cout <<"Ingrese un numero: ";
    cin >>N;
    for(int i=1; i<=10; i++){
     tabla = N*i;
     cout <<N <<"x" <<i<<"=" <<N*i <<endl;
    }
    return 0;
}