#include <iostream>
using namespace std;
int main(){
    int N;
    cout <<"Ingrese la altura del triangulo: ";
    cin >>N;
    for(int i=1; i<=N; i++){
        for(int j=1; j <=i; j++){
            cout <<'*';
        }
        cout <<endl;
    }
    for(int i=N; i>=0;i--){
        for(int j=0; j <=i; j++){
            cout <<'*';
        }
        cout <<endl;    
    }
    return 0;
}