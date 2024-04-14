//Write a Java program to segregate all 0s on left side and all 1s on right side of a given array of 0s and 1s without sorting the array

#include <bits/stdc++.h>
using namespace std;
int main(){
    int array[]={0,0,1,0,1,1,1,0,0};
    int zero=0,one=0;
    int len=sizeof(array)/sizeof(array[0]);
    for(int i=0;i<len;i++){
        if(array[i]==0){
            zero++;
        }
    }
    one=len-zero;
    for(int i=0;i<len;i++){
        if(i<zero){
            cout<<"0 ";
        }
        else{
            cout<<"1 ";
        }
    }
    return 0;
}