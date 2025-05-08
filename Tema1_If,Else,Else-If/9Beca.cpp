#include <iostream>
using namespace std;
int main(){
    int PROMEDIUM,FAULTS;

    cout <<"Enter your promedium: ";
    cin >>PROMEDIUM;
    cout <<"Enter your faults: ";
    cin >>FAULTS;

    if(PROMEDIUM >= 85 && FAULTS <= 3){
        cout <<"Congratulations you receive a scholarship";
    }else{
        cout <<"Does not meet the requirements";
    }
    return 0;
}