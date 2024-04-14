//Write a Java program to find the second smallest element in an array
#include <bits/stdc++.h>
using namespace std;

int main(){
    int min=INT_MAX;
    int min2=INT_MAX;
    int minindex=0;
    int array[]={1,2,1,33,33,5,6};
    for(int i=0;i<7;i++){
        if (array[i]<min){
            min=array[i];
            minindex=i;
        }
    }
    for(int i=0;i<7;i++){
        if(array[i]==min){
            array[i]=INT_MAX;
        }
    }
    for(int i=0;i<7;i++){
        if(array[i]<min2){
            min2=array[i];
        }
    }
    cout<<min2;
    return 0;
}