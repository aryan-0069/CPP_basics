#include <iostream>
using namespace std;

int main(){
    int age;
    cout<<"ENTER AGE = ";
    cin>>age;
    if(age<12){
        cout<<"CHILD";
    }
    else if(age<19 && age>11){
        cout<<"TEENAGER";
    }
    else{
        cout<<"ADULT";
    }
    return 0;
}