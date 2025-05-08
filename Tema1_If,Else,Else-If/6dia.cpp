#include <iostream>
using namespace std;
int main(){
    int DATA1;

    cout <<"Enter a number from 1 to 7: ";
    cin >>DATA1;

    if(DATA1 >= 1 && DATA1 <= 5){
        cout <<"work day";
    }else if(DATA1=6){
        cout <<"weekend";
    }else if(DATA1=7){
        cout <<"weekend";
    }else{
        cout <<"Enter a valid number";
    }

    return 0;
}