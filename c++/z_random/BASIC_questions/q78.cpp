/*
Write a Java program that checks whether an array of integers alternates between positive and negative values.  
Example:
Original array: [1, -2, 5, -4, 3, -6]
Check the said array of integers alternates between positive and negative values!true
*/

#include <bits/stdc++.h>
using namespace std;
int main(){
    int array[]={1, -2, 5, -4, 9, -6};
    int len=sizeof(array)/sizeof(array[0]);
    int a=0;
    for(int i=1;i<len;i++){
        if(array[i]>=0){
            if(array[i-1]>=0){
                a=1;
                break;
            }
        }
        else{
            if(array[i-1]<0){
                a=1;
                break;
            }
        }
        
    }
    if(a==1){
        cout<<"not possible"<<endl;
    }
    else{
        cout<<"done";
    }

    return 0;
}