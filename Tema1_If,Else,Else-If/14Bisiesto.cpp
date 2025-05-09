#include <iostream>
using namespace std;
int main(){
    int YEAR;
    cout <<"Enter a year of your eleccion: ";
    cin >> YEAR;

    // es bisiesto si se puede dividir entre 4
    // si es bisisesto si se puede dividir entre 4 y no por 100
    // no es bisiesto si se puede dividir entre 100 y no por 400
    // es bisiesto si se puede dividir entre 100 y 400

    // % sirve para dividir entre dos valores enteros si devuelve 0 devuelve un entero, si devuelve 1 devuelve un decimal
    // como la division esta igualada a 0 osea que simpre tiene que dar un entero si da decimal (1) no sirve
    
    if((YEAR % 4 == 0 && YEAR % 100 !=0)||(YEAR % 400 == 0)){
        cout <<"It's a leap year";
    }else{
        cout <<"It's not a leap year";
    }
    return 0;
}
