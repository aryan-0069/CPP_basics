//Write a Java program to find the second largest element in an array.
#include <bits/stdc++.h>
using namespace std;

int main(){
    int max=INT_MIN;
    int max2=INT_MIN;
    int maxindex=0;
    int array[]={1,2,3,33,33,5,6};
    for(int i=0;i<7;i++){
        if (array[i]>max){
            max=array[i];
            maxindex=i;
        }
    }
    for(int i=0;i<7;i++){
        if(array[i]==max){
            array[i]=INT_MIN;
        }
    }
    //array[maxindex]=-1;
    for(int i=0;i<7;i++){
        if(array[i]>max2){
            max2=array[i];
        }
    }
    cout<<max2;
    return 0;
}