#include <iostream>
using namespace std;
int main(){

    int SPEED;

    cout <<"Enter the speed at which you were driving: ";
    cin >>SPEED;

    if(SPEED >= 80){
        cout <<"You will be fined more for speeding";
    }else if( SPEED >= 60){
        cout <<"You will be fined for speeding";
    }else{
        cout <<"Free of fine";
    }

    return 0;
}