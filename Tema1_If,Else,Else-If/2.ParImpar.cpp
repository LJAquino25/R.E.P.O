#include <iostream>
using namespace std;
int main(){
    int data1;
    // This program is to determine the age of the user if they are older or younger than 18 years old
    cout <<"Enter a number: " <<endl;
    cin >>data1;
    // al dividir con el % es par si devuelve 0 porque es una division exacta osea devuelve un entero
    // en cambio al dividir si devuelve 1 es porque es impar es una division inexacta osea devuelve un decimal
    if (data1%2==0){
        cout <<"Your number is even" <<endl;

    }else{
        cout <<"Your number is odd";
    }
 
    return 0;
}