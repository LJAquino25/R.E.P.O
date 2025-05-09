#include <iostream>
using namespace std;
int main(){
    string PASSWORD1,USER1,PASSWORD2,USER2,PASSWORD3,USER3,USER,PASSWORD;

    cout <<"--Autentication--" <<endl;
    cout <<"Enter your username: ";
    cin >>USER;
    cout <<"Enter your password: ";
    cin >>PASSWORD;

    if(USER == "JBond" && PASSWORD == "000780"){
        cout <<"Valid login";
    }else if(USER != "JBond" && PASSWORD != "000780"){
        cout <<"invalid login, remaining attempts: 3"<<endl;
            //pausa la consola, este es exclusivo de windows, esta misma funcion te pone en la consola dele a una tecla pa continuar
            system("pause");
            system("cls"); //Limpiar la consola
        cout <<"--Autentication--"<<endl;;
        cout <<"Enter your username: ";
        cin >>USER1;
        cout <<"Enter your password: ";
        cin >>PASSWORD1;

            if(USER1 == "JBond" && PASSWORD1 == "000780"){
            cout <<"Valid login";
            }else if(USER1 != "JBond" && PASSWORD1 != "000780"){
            cout <<"invalid login, remaining attempts: 2"<<endl;

                system("pause");
                system("cls");
            cout <<"--Autentication--"<<endl;;
            cout <<"Enter your username: ";
            cin >>USER2;
            cout <<"Enter your password: ";
            cin >>PASSWORD2;
            
                if(USER2 == "JBond" && PASSWORD2 == "000780"){
                cout <<"Valid login";
                }else if(USER2 != "JBond" && PASSWORD2 != "000780"){
                cout <<"invalid login, remaining attempts: 1"<<endl;

                    system("pause");
                    system("cls");
                cout <<"--Autentication--"<<endl;;
                cout <<"Enter your username: ";
                cin >>USER3;
                cout <<"Enter your password: ";
                cin >>PASSWORD3;
                
                    if(USER3 == "JBond" && PASSWORD3 == "000780"){
                    cout <<"Valid login";
                    }else if(USER3 != "JBond" && PASSWORD3 != "000780"){
                    cout <<"invalid login, remaining attempts: 0"<<endl;

                    system("pause");
                    system("cls");
                }
            }
        } 
    }
    return 0;
}