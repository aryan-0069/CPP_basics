/*
13. A company decided to give bonus of 5% to employee if his/her year of service is more than 5 years.
Ask user for their salary and year of service and print the net bonus amount.
*/
#include <iostream>
using namespace std;
int main(){
    float sal,year;
    cin>>sal,year;
    if(year>5){
        cout<<sal+(sal/5);
    }
    else{
        cout<<sal;
    }
    return 0;
}