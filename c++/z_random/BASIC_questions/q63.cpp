/*
Write a Java program to find a missing number in an array. Where the numbers count starts from 1 to n.
Let us consider array of size 6 -> [1 , 2 , 4 , 5 ,6 ,7]
here the missing number is 3 because after 2, 3 comes. 
NOTE -> there will be only 1 missing element in the array, user will be 
bound to provide that type of array only and if there is no missing element print -1.
*/

#include <bits/stdc++.h>
using namespace std;
int main(){
    int array[]={1,2,3,4,5,7};
    int n=sizeof(array)/4;
    int a=0,pos=0;
    for(int i=0;i<n;i++){
        if(array[i]!=i+1){
            a=1;
            pos=i+1;
            break;
        }
        else{
            continue;
        }
    }
    if(a==1){
        cout<<pos;
    }
    else{
        cout<<"-1";
    }
    
    return 0;
}