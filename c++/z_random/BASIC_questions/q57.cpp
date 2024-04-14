/*
Write a Java program to check if the sum of all the 10's in the array is exactly 30.
Return false if the condition does not satisfy, otherwise true.
*/

#include <bits/stdc++.h>
using namespace std;
int main(){
    int array[]={10,20,30,40,10,60};
    
    int sum=0;
    for(int i=0;i<6;i++){
        if(array[i]==10){
            sum+=10;
        }
    }
    if(sum==30){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
    return 0;
}