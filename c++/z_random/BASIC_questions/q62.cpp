/*
Write a Java program to insert an element (specific position) into an array.
for ex-> [1 , 2, 3, 4] insert 6 at index 3 -> [1 , 2 , 3 , 6 , 4]
*/

#include <bits/stdc++.h>
using namespace std;
int main(){
    int array[]={1,2,3,4};
    int n=4;
    int ele=6;
    int pos=3;
    int array1[n+1];
    for(int i=0;i<n+1;i++){
        if(i==pos){
            array1[i]=ele;
            break;
        }
        else{
            array1[i]=array[i];
        }
    }
    for(int i=pos;i<n;i++){
        array1[i+1]=array[i];
    }
    array[n+1];
    for(int i=0;i<n+1;i++){
        array[i]=array1[i];
    }
    for(int i=0;i<n+1;i++){
        cout<<array[i];
    }

    return 0;
}