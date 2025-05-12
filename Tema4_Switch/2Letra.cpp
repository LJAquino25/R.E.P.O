#include <iostream>
using namespace std;
int main(){
    
    int NOTE,OPCION;

    cout <<"Ingrese su calificacion: ";
    cin >>NOTE;

    if(NOTE <= 100 && NOTE >= 87){
        OPCION = 'A';
    }else if(NOTE <= 86 && NOTE >= 77){
        OPCION = 'B';
    }else if(NOTE <= 76 && NOTE >=67){
        OPCION = 'C';
    }else if(NOTE <= 66 && NOTE >= 60){
        OPCION = 'D';
    }else if(NOTE <= 59 && NOTE >= 0){
        OPCION = 'F';
    }

    switch (OPCION)
    {
    case 'A':
        cout <<"Your note is A "; 
        break;
    case 'B':
        cout <<"Your note is B "; 
        break;
    case 'C':
        cout <<"Your note is C "; 
        break;
    case 'D':
        cout <<"Your note is D "; 
        break;
    default:
        cout <<"Your note is F";
        break;
    }
    return 0;

}