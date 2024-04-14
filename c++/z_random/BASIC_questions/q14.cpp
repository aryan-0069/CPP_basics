/*
14. A school has following rules for grading system:
a. Below 25 - F
b. 25 to 45 - E
c. 45 to 50 - D
d. 50 to 60 - C
e. 60 to 80 - B
f. Above 80 - A
Ask user to enter marks and print the corresponding grade. 	
*/


#include <iostream>
using namespace std;
int main(){
    int grade;
    cin>>grade;
    if(grade<25){
        cout<<"F";
    }
    else if(grade>=25 & grade<45){
        cout<<"E";
    }
    else if(grade>=45 & grade<50){
        cout<<"D";
    }
    else if(grade>=50 & grade<60){
        cout<<"C";
    }
    else if(grade>=60 & grade<80){
        cout<<"B";
    }
    else{
        cout<<"A";
    }

    return 0;
}