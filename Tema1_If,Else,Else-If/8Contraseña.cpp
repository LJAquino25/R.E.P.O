#include <iostream>
using namespace std;
int main(){
    string USER,PASSWORD;
    // se usa string porque en vez que el usuario digite un entero un solo digito, ingresa varios datos
    // con eso podemos igualar valores y si no resultan esos o no son iguales no sirve ajajaj
    cout <<"Enter your username: ";
    cin >>USER;
    cout <<"Enter your password: ";
    cin >>PASSWORD;
    
    if(USER == "JBond" && PASSWORD == "000725"){
        cout <<"loading..." <<endl;
        cout <<"Welcome to the app";
    }else{
        cout <<"invalid login, please try again";
    }
    

    return 0;
}