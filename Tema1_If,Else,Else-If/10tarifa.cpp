#include <iostream>
using namespace std;
int main(){
    int WEIGHT;

    cout <<"Enter the weight of the package: ";
    cin >>WEIGHT;

    if(WEIGHT <=4 ){
        cout <<"Your package does not exceed weight, confirm delivery";
    }else if (WEIGHT <= 5){
        cout <<"Your package exceeds the weight, an extra 5 dollars will be charged";
    }else if(WEIGHT >= 6 && WEIGHT <=10){
        cout <<"Your package exceeds the weight, an extra 10 dollars will be charged ";
    }else if(WEIGHT >= 10){
        cout <<"Your package exceeds the weight, an extra 15 dollars will be charged";
    }

    return 0;
}