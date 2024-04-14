/*
Write a Java program that checks an array is negative dominant or not. If the array is negative dominant print true otherwise false.
Original array of numbers:
[1, -2, -5, -4, 3, -6]
Check Negative Dominance in the said array!true
*/

#include <bits/stdc++.h>
using namespace std;
int main(){
    int array[]={1,-2,-5,3,6};
    int len=sizeof(array)/sizeof(array[0]);
    int pos=0,neg=0;
    for(int i=0;i<len;i++){
        if(array[i]>=0){
            pos++;
        }
        else{
            neg++;
        }
    }
    if(neg>pos){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
    return 0;
}