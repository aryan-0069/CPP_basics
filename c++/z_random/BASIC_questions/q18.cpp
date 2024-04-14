//18. Write a program to check whether a entered character is lowercase ( a to z ) or uppercase ( A to Z ).
#include <iostream>
using namespace std;
int main(){
    char ch;
    cin>>ch;
    if(int(ch)>=97 && int(ch)<=122){
        cout<<"lowercase";
    }
    else{
        cout<<"uppercase";

    }
    return 0;
}