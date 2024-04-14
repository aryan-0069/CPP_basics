/*
4. Take a number from user
If the number is between 1 and 7 then print the days of the week accordingly
For example - if user gives 1 then print Monday if 2 print Tuesday and so on
And if the user gives any number less than 1 or greater than 7 then print "Invalid Number".
*/
#include <iostream>
using namespace std;
int main(){
    int a=3;
    //cin>>a;
    if(a==1){
        cout<<"MONDAY";
    }
    else if(a==2){
        cout<<"TUESDAY";
    }
    else if(a==3){
        cout<<"WEDNESDAY";
    }
    else if(a==4){
        cout<<"THURSDAY";
    }
    else if(a==5){
        cout<<"FRIDAY";
    }
    else if(a==6){
        cout<<"SATURDAY";
    }
    else if(a==7){
        cout<<"SUNDAY";
    }
    else{
        cout<<"INVALID";
    }
    return 0;
}