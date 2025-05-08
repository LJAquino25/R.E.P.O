#include <iostream>
using namespace std;
int main(){
    int DATA1,DATA2,DIFERENCE,DIFERENCE2;

    cout <<"Enter first number: ";
    cin >>DATA1;
    cout <<"Enter second number: ";
    cin >>DATA2;

    DIFERENCE = DATA1 - 100;
    DIFERENCE2 = DATA2 - 100;
    
    if(DIFERENCE > DIFERENCE2){ 
        cout <<"The first number is the closest to 100.";
    }else if (DIFERENCE2 >DIFERENCE){
        cout <<"The second number is the closest to 100.";
    }else if(DIFERENCE == DIFERENCE2){
        cout <<"all the numbers are closest to 100";
    }
    return 0;
}