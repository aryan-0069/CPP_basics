//27. A five-digit number is entered through the keyboard. 
//Write a program to obtain the reversed number and to determine whether the original and reversed numbers are equal or not.

#include <iostream>
using namespace std;
int main(){
    int num;
    cin>>num;
    int x= num,c=0;
    int new_num=0;
    while(num!=0){
        c=num%10;
        new_num=new_num*10+c;
        num=num/10;

    }
    if(new_num==x){
        cout<<"EQUAL";
    }
    else{
        cout<<"NOT EQUAL";
    }
    return 0;
}