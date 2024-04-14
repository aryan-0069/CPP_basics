//Write a Java program to compute the average value of an array of integers except the largest and smallest values.

#include <bits/stdc++.h>
using namespace std;
int main(){
    int array[]={1,2,3,4,5,7};
    double sum=0;
    int max=INT_MIN,maxindex=0;
    int min=INT_MAX,minindex=0;
    for(int i=0;i<6;i++){
        if(array[i]>max){
            max=array[i];
            maxindex=i;
        }
    }
    for(int i=0;i<6;i++){
        if(array[i]<min){
            min=array[i];
            minindex=i;
        }
    }
    array[maxindex]=0;
    array[minindex]=0;


    for(int i=0;i<6;i++){
        sum+=array[i];
    }
    cout<<sum/4;

    return 0;
}