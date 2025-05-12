#include <iostream>
using namespace std;
int main(){
   string PASSWORD,USER,PASSWORD1,USER1;

   cout<<"Enter your user:";
   cin >> USER;
   cout <<"Enter your password:";
   cin >> PASSWORD;

   cout <<"Re enter your user:";
   cin >> USER1;
   cout <<"Re enter your password:";
   cin >> PASSWORD1;

   if(USER == USER1 && PASSWORD == PASSWORD1){
      cout <<"Passwords coincide";
   }else{
      cout <<"Rewrite the credentials do not match";
   }

   return 0;
}