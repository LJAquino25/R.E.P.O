#include <iostream>
using namespace std;
int main(){
    int DATA1,DATA2,DATA3;
    
    cout <<"Enter the number of first of the sides: ";
    cin >>DATA1;
    cout <<"Enter the number of second of the sides: ";
    cin >>DATA2;
    cout <<"Enter the number of third of the sides: ";
    cin >>DATA3;

    // triangulo equilatero - 3 lados iguales angulo de 60
    // triangulo escaleno  - 3 lados diferentes
    // triangulo isoceles - 2 lados iguales

    if(DATA1 == DATA2 && DATA2 == DATA3 && DATA3 == DATA1){
        cout <<"Equilateral triangle";
    }else if(DATA1 != DATA2 && DATA2 != DATA3 && DATA3 != DATA1){
        cout <<"Scalene triangle";
    }else if(DATA1 == DATA2 || DATA2 == DATA3 || DATA3 == DATA1){
        cout <<"Isosceles triangle";
    }
    return 0;
}