#include <iostream>
using namespace std;
int main(){
    int NOTE;

    cout <<"Enter your note to convert to letter: ";
    cin >>NOTE;

    if(NOTE <= 100 && NOTE >= 87){
        cout<<"Your note is: A";
    }else if(NOTE <= 86 && NOTE >= 77){
        cout <<"Your note is: B";
    }else if(NOTE <= 76 && NOTE >=67){
        cout <<"Your note is: C";
    }else if(NOTE <= 66 && NOTE >= 60){
        cout <<"Your note is: D";
    }else if(NOTE <= 59 && NOTE >= 0){
        cout <<"Your note is: F";
    }else{
        cout <<"Enter a valid note";
    }
    return 0;
}