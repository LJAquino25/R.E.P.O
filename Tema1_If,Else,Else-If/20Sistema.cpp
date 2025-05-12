#include <iostream>
using namespace std;
int main(){
    int AGE,NUMBER,YEAR;
    
    cout <<"Enter your age: ";
    cin >> AGE;
    cout <<"Enter your number of infractions: ";
    cin >>NUMBER;
    cout <<"Enter your conducting experience: ";
    cin >>YEAR;

    if((AGE >=35 && NUMBER >=15 ) || (AGE >= 35 && YEAR >=20) || (NUMBER >=15 && YEAR >=20)){
        cout <<"Veteran";
    }else if ((AGE >=25 && NUMBER >=10) || (AGE >= 25 && YEAR <=8) || (NUMBER >= 10 && YEAR >=15)){
        cout <<"Intermediate";
    }else{
        cout <<"new";
    }

    return 0;
}