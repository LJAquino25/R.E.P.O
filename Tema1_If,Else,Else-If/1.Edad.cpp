#include <iostream>
using namespace std;
int main(){
    int age;
    // This program is to determine the age of the user if they are older or younger than 18 years old
    cout <<"what is your age: " <<endl;
    cin >>age;
    
    if (age > 18){
        cout <<"Your age is greater than 18" <<endl;

    }else{
        cout <<"Your age is minor than 18";
    }
 
    return 0;
}
