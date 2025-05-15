#include <iostream>
using namespace std;
int main(){

    int PAR,R;

    for (int i = 1; i <= 50; i++)
    {
        if(i%2 == 0){
            cout <<i;
        }else{
            cout <<" ";
        }
    }

    return 0;
}