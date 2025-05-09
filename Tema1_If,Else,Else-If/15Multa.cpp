#include <iostream>
using namespace std;
int main(){

    int SPEED;

    cout <<"Enter the speed at which you were driving: ";
    cin >>SPEED;
    //se ordena de la mayor primero ya que se evalua primero en >=80 y al no entrar ahi pasa al siguiente
    // si es alrevez no funcionaria 
    if(SPEED >= 80){
        cout <<"You will be fined more for speeding";
    }else if( SPEED >= 60){
        cout <<"You will be fined for speeding";
    }else{
        cout <<"Free of fine";
    }

    return 0;
}