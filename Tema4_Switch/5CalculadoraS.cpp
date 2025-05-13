#include <iostream>
using namespace std;
int main(){
    float DATA1,DATA2;
    long long ANSWER;
    char OPCION;
    
    cout <<"----Calculadora simple----" <<endl;
    cout <<" ";
    cin >> DATA1;
    cin >>OPCION;
    cout <<" ";
    cin >>DATA2;

    switch(OPCION)
    {
    case '+' :
        ANSWER = DATA1 + DATA2;
        cout << "= "<<ANSWER; 
    break;
    case '-' :
        ANSWER = DATA1 - DATA2;
        cout  << "= "<<ANSWER; 
    break;
    case '*' :
        ANSWER = DATA1 * DATA2;
        cout << "= "<<ANSWER;
    break;
    case '/' :
    if(DATA2 <=0){
        cout <<"It cannot be divided between zero";
    break;
    }else
        ANSWER = DATA1 / DATA2;
        cout << "= "<<ANSWER;
    break;
    }
    return 0;
}
