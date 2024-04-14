//19. Write a program to input any character and check whether it is alphabet, digit or special character.
#include <iostream>
using namespace std;
int main(){
    char ch;
    cin>>ch;
    
    if(int(ch)>=97 && int(ch)<=122){
        cout<<"alphabet";
    }
    else if(int(ch)>=65 && int(ch)<=90){
        cout<<"alphabet";
    }
    else if(ch>='0' && ch<='9'){
        cout<<"digit";
    }
    else{
        cout<<"special character";
    }

    return 0;
}