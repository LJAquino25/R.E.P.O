#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;
int main()
{
    int N;
    srand(time(NULL));
    int num = (rand() % 100) + 1;
    cout << "Numero aleatorio: " << num << endl;

    while (N != num)
    {
        cout << "Ingrese un numero: ";
        cin >> N;
        if(N>num){
            cout<<"Sigue intentando, un numero mas pequeño"<<endl;
        }else if(N<num){
            cout<<"Sigue intentando, un numero mas grande"<<endl;
        }
    }
    return 0;
}