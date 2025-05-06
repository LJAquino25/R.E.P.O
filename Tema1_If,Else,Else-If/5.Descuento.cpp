#include <iostream>
using namespace std;
int main(){
    int buy,discount; 
    cout <<"Enter the value of your purchase: ";
    cin >> buy;
    if (buy > 100){
        cout <<"10% discount for your purchase of more than $100" <<endl;
        discount = buy-(buy*0.1);
        cout <<"Your final price is: " <<discount;

    }else{
        cout <<"thank you for your purchase";
    }
    return 0;
}