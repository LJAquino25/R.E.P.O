#include <iostream>
using namespace std;
int main(){
    int AGE;
    
    cout<<"What is your age:";
    cin >>AGE;
    
    if(AGE<5){
        cout <<"Children under 5 enter free ";
    }else if(AGE >= 5 && AGE <=12){
        cout <<"Children between 5 and 12 years pay $ 5";
    }else if(AGE > 12){
        cout <<"Children over 12 years pay $ 10";
    }
      
    return 0;
}