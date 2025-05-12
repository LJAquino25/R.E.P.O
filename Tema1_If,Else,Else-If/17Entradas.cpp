#include <iostream>
using namespace std;
int main(){
    //17. **Precio de Entrada a un Parque**  
    //Un parque cobra diferente según la edad: niños menores de 5 entran gratis, 
    //entre 5 y 12 pagan $5, mayores de 12 pagan $10.
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