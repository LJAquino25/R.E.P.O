#include <iostream>
using namespace std;
int main(){
    int data1;
    // This program is to determine the age of the user if they are older or younger than 18 years old
    cout <<"Enter a number: " <<endl;
    cin >>data1;
    
    if (data1%2==0){
        cout <<"Your number is even" <<endl;

    }else{
        cout <<"Your number is odd";
    }
 
    return 0;
}