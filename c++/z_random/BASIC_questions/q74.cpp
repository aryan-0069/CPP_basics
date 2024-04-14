/*
Write a Java program to shuffle a given array of integers provided the element which was present 
on it's index should be present again in that same index after shuffling. 
for ex -> [1 , 2 , 3 , 4] -> [4 , 3 , 2 , 1] there can be multiple answers you have to print any 1 output.
*/

#include <bits/stdc++.h>
using namespace std;
int main(){
    int array[]={1,2,3,4,5};
    int len=sizeof(array)/sizeof(array[0]);
    if(len%2==0){
        for(int i=0;i<len/2;i++){
            int temp=array[i];
            array[i]=array[len-i-1];
            array[len-i-1]=temp;
        }
    }
    else{
        for(int i=0;i<len/2;i++){
            int temp=array[i];
            array[i]=array[len-i-1];
            array[len-i-1]=temp;
        }
        int temp=array[0];
        array[0]=array[(len/2)];
        array[len/2]=temp;

    }
    
    for(int i=0;i<len;i++){
        cout<<array[i];
    }
    return 0;
}