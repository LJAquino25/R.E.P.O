#include <iostream>
using namespace std;
int main(){
    int BILL;

    cout <<"What is your electric light rate: ";
    cin >>BILL;
    if(BILL < 100){
        cout <<"Low rate";
    }else if (BILL >= 100 && BILL <=200){
        cout <<"mid rate";
    }else{
        cout <<"High rate ";
    }
    return 0;
} 
