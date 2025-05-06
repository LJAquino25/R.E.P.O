#include <iostream>
using namespace std;
int main(){
    int grade;
    cout <<"Write your final grade:";
    cin >>grade;
    if (grade>=60){
        cout <<"Congratulations you have passed";
    }else{
        cout <<"Your grade is less, you have failed";
    }
    return 0;
}