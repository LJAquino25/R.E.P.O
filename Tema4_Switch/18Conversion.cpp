#include <iostream>
using namespace std;
int main(){
    int OPCION;
    double CM,M,KM,ANSWER;

    cout <<"-----Conversion -----" <<endl;
    cout <<"-  1.cm a pulgadas  -" <<endl;
    cout <<"-  2.metros a pies  -" <<endl;
    cout <<"-   3.km a millas   -" <<endl;
    cout <<"---------------------" <<endl;
    cin >>OPCION;
    system("pause");
    system("cls");

    switch(OPCION)
    {
        case 1:
        cout <<"Ingrese el valor a convertir: ";
        cin >>CM;
        ANSWER = CM / 2.54;
        cout <<"cm a pulgadas: " <<ANSWER <<" cm";
        break;
        case 2:
        cout <<"Ingrese el valor a convertir: ";
        cin >>M;
        ANSWER = M * 3.281;
        cout <<"metros a pies: " <<ANSWER <<" m";
        break;
        case 3:
        cout <<"Ingrese el valor a convertir: ";
        cin >>KM;
        ANSWER = KM / 1.609;
        cout <<"km a millas: " <<ANSWER <<" km";
        break;
        default:
        cout <<"Ingrese un numero valido";
        break;
    }
    return 0;
}