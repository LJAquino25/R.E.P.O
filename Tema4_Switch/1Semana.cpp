#include <iostream>
using namespace std;
int main(){

    int OPCION;
    cout <<"Enter a number from 1 to 7: ";
    cin >> OPCION;

    switch (OPCION)
    {
    case 1:
        cout <<"Monday";
        break;
    case 2:
        cout <<"Tuesday";
        break;
    case 3:
        cout <<"Wednesday";
        break;
    case 4:
        cout <<"Thursday";
        break;
    case 5:
        cout <<"Friday";
        break;
    case 6:
        cout <<"Saturday";
        break;
    case 7:
        cout <<"Sunday";
        break;
    default:
        cout <<"Enter a valid number";
        break;
    }
    return 0;
}