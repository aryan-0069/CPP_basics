/*
Write a Java program to get the majority element from a given array of integers containing duplicates. 
Majority element: A majority element is an element that appears more than n/2 times where n is the size of the array
*/

#include <bits/stdc++.h>
using namespace std;
int main(){
    int array[]={1,2,1,4,5,5};
    int arrlen=sizeof(array)/sizeof(array[0]);
    //sorting the array so to count the elements
    for(int i=0;i<arrlen;i++){
        for(int j=i+1;j<arrlen;j++){
            if(array[i]>array[j]){
                int temp=array[i];
                array[i]=array[j];
                array[j]=temp;
            }
        }
    }
    //finidng the unique elements for declaring the length of newaray
    int a=0,unique_len=0;
    for(int i=0;i<arrlen;i++){     
        for(int j=i+1;j<=arrlen;j++){
            a=0;
            if(array[i]==array[j]){
                a=1;
                break;
            }
        }
        if(a==0){
            unique_len++;
        }
    }
    
    int l=unique_len*2;
    int newarray[l];


    //main program
    int key=0;
    for(int i=0;i<arrlen;i++){
        int counter =1;
        
        for(int j=i+1;j<arrlen;j++){
            if(array[i]==array[j]){
                counter++;
            }
        }
        newarray[key]=array[i];
        key++;
        newarray[key]=counter;
        key++;
        i=i+counter-1;
    }
    
    int max=INT_MIN;
    int pos=-1;
    
    for(int i=1;i<l;i++){
        if(max<newarray[i]){
            max=newarray[i];
            pos=i;
            i++;
        }
    }
    
    if(max>(arrlen/2)){
        cout<<"MAJORITY ELEMENT = "<<newarray[pos-1]<<endl;
    }
    else{
        cout<<"shit man";
    }
    return 0;
}