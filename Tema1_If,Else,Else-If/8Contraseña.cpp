#include <iostream>
using namespace std;
int main(){
    string USER,PASSWORD;
    
    cout <<"Enter your username: ";
    cin >>USER;
    cout <<"Enter your password: ";
    cin >>PASSWORD;
    
    if(USER == "JBond" && PASSWORD == "000725"){
        cout <<"loading..." <<endl;
        cout <<"Welcome to the app";
    }else{
        cout <<"invalid login, please try again";
    }
    

    return 0;
}