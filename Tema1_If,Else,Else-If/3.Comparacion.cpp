#include <iostream>
using namespace std;
int main(){
    int data1,data2;
    cout <<"Enter a number: " <<endl;
    cin >>data1;
    cout <<"Enter a second number: " <<endl;
    cin >>data2;
    
    if (data1>data2){
        cout <<"Number is higher: " <<data1 <<endl;
        cout <<"Number is minor: " <<data2 <<endl;
    }else if(data1<data2){
        cout <<"Number is minor: " <<data1 <<endl;
        cout <<"Number is higher: " <<data2 <<endl;
    }else{
        cout <<"Number is equal";
    }
    return 0;
}