/*
8. Take a number from user
If the number is between 1 and 12 then print the month of the year accordingly
For example - if user gives 1 then print January if 2 print February and so on
And if the user gives any number less than 1 or greater than 12 then print "Invalid Month".
*/
#include <iostream>
using namespace std;
int main(){
    int a=3;
    //cin>>a;
    if(a==1){
        cout<<"JANUARY";
    }
    else if(a==2){
        cout<<"FEBRUARY";
    }
    else if(a==3){
        cout<<"MARCH";
    }
    else if(a==4){
        cout<<"APRIL";
    }
    else if(a==5){
        cout<<"MAY";
    }
    else if(a==6){
        cout<<"JUNE";
    }
    else if(a==7){
        cout<<"JULY";
    }
    else if(a==8){
        cout<<"AUGUST";
    }
    else if(a==9){
        cout<<"SEPTEMBER";
    }
    else if(a==10){
        cout<<"OCTOBER";
    }
    else if(a=11){
        cout<<"NOVEMBER";
    }
    else if(a==12){
        cout<<"DECEMBER";
    }
    else{
        cout<<"INVALID";
    }
    return 0;
}