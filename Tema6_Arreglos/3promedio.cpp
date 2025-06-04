#include <iostream>
using namespace std;
int main(){
    int i=0;
    int promedio[5];
    int suma=0;
    float total=0;
    cout<<"Ingrese sus notas a promediar: "<<endl;
    for(i;i<5;i++){
        cout<<"nota "<<i+1<<": ";
        cin>>promedio[i];
        suma += promedio[i];
        total = suma/5;
    }
        cout<<"Promedio: "<<total;
    return 0;
}