/*
Write a Java program to arrange the elements of a given array of integers 
where all negative integers appear before all the positive integers without sorting
*/

#include <bits/stdc++.h>
using namespace std;
int main(){
    int array[]={-1,4,-6,4,3,21,0,-99};
    int len=sizeof(array)/sizeof(array[0]);
    int newarray1[len];
    int key=0;
    for(int i=0;i<len;i++){
        if(array[i]<0){
            newarray1[key]=array[i];
            key++;
        }
    }
    for(int i=0;i<len;i++){
        if(array[i]>=0){
            newarray1[key]=array[i];
            key++;
        }
    }
    for(int i=0;i<len;i++){
        array[i]=newarray1[i];
        cout<<array[i]<<" ";
    }
    return 0;
}