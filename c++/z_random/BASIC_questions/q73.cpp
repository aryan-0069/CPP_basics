/*
Write a Java program to separate even and odd numbers of a given array of integers. 
Put all even numbers first, and then odd numbers. for ex -> [1 , 2 , 3 , 4] -> [2 , 4 , 1 , 3] 
order does not matter here you can even print [4 , 2 , 1 , 3]
*/

#include <bits/stdc++.h>
using namespace std;
int main(){
    int array[]={1,4,6,4,3,21,0,99};
    int len=sizeof(array)/sizeof(array[0]);
    int newarray1[len];
    int key=0;
    for(int i=0;i<len;i++){
        if(array[i]%2==0){
            newarray1[key]=array[i];
            key++;
        }
    }
    for(int i=0;i<len;i++){
        if(array[i]%2!=0){
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