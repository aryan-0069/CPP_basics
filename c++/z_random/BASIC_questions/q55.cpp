//Write a Java program to get the difference between the largest and smallest values in an array of integers. 
//The length of the array must be 1 and above.

#include <bits/stdc++.h>
using namespace std;
int main(){
    int array[]={1,2,3,4,5,7};
    int max=INT_MIN;
    int min=INT_MAX;
    for(int i=0;i<6;i++){
        if(array[i]>max){
            max=array[i];
        }
    }
    for(int i=0;i<6;i++){
        if(array[i]<min){
            min=array[i];
        }
    }
    
    cout<<max-min;
    return 0;
}