/*
Write a Java program to replace each element of the array with product of every other element in a given array of integers.
nums1 = { 1, 2, 3, 4, 5, 6, 7}
Array with product of every other element:
[5040, 2520, 1680, 1260, 1008, 840, 720]
*/

#include <bits/stdc++.h>
using namespace std;
int main(){
    int array[]={ 1, 2, 3, 4, 5, 6, 7};
    int len=sizeof(array)/sizeof(array[0]);
    int mul=1;
    for(int i=0;i<len;i++){
        mul*=array[i];
    }
    for(int i=0;i<len;i++){
        cout<<mul/array[i]<<" ";
    }
    return 0;
}