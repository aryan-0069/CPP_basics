//Write a Java program to reverse an array of integer values.

#include <bits/stdc++.h>
using namespace std;
int main(){
    int array[]={1,2,3,4,5,6};
    int n=6,a=0,b=0,c=0;
    for(int i=0;i<n/2;i++){
        a=array[i];
        b=array[n-i-1];
        array[i]=b;
        array[n-i-1]=a;
    }
    for(int i=0;i<n;i++){
        cout<<array[i]<<" ";
    }
    return 0;
}