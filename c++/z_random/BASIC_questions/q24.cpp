//24. Write a Java program that reads an positive integer and count the number of digits the number has.

#include <iostream>
using namespace std;
int main(){
    int num;
    cin>>num;
    int a=0;
    while(num>0){
        num=num/10;
        a++;
    }
    cout<<a;

    return 0;
}