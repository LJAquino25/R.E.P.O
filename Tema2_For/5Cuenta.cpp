#include <iostream>
#include <unistd.h>
using namespace std;
int main(){
    int N;
    for(int i=10; i>=0;i--){
        cout<<"Cuenta regresiva: "<<i <<endl;
        sleep(1);
    }
    return 0;
}