#include <iostream>
using namespace std;
int main(){
    int TEMP;

    cout <<"Enter the current temperature: ";
    cin >>TEMP;

    if(TEMP < 15){
        cout <<"The temperature is cold";
    }else if(TEMP >= 15 && TEMP <=25){
        cout <<"the temperature is mild";
    }else if(TEMP >25){
        cout <<"The temperature is hot";
    }

    return 0;
}