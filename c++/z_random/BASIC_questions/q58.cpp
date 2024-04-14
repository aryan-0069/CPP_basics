//Write a Java program to check if an array of integers contains two specified elements 65 and 77.


#include <bits/stdc++.h>
using namespace std;
int main(){
    int array[]={1,2,3,4,65,33,77};
    int a=0,b=0;
    for(int i=0;i<7;i++){
        if(array[i]==65){
            a=1;
        }
        else if(array[i]==77){
            b=1;
        }
    }
    if(a==1 && b==1){
        cout<<"it contains both 65 and 77";
    }
    else{
        cout<<"kahi aur jaake dhundo";
    }
    return 0;
}