/*
Given a sorted array(ascending) with only 0's and 1's move all zeros to right end and all 1's to left end. 
for ex -> [0 , 0 , 0 , 1 , 1] -> [1 , 1 , 0 , 0 , 0]
*/

#include <bits/stdc++.h>
using namespace std;
int main(){
    int array[]={0,0,0,1,1,1};
    int n=6;
    for(int i=0;i<n/2;i++){
        int a=array[i];
        array[i]=array[n-i-1];
        array[n-i-1]=a;
    }
    for(int i=0;i<n;i++){
        cout<<array[i];
    }
    return 0;
}