//Write a Java program to find the number of even and odd integers in a given array of integers.

#include <bits/stdc++.h>
using namespace std;
int main(){
    int evencounter=0,oddcounter=0;
    int array[]={1,2,3,7,5,6};
    int n=6;
    for(int i=0;i<n;i++){
        if(array[i]%2==0){
            oddcounter++;
        }
        else{
            evencounter++;
        }
    }
    cout<<"evencounter = "<<evencounter<<endl;
    cout<<"oddcounter = "<<oddcounter;
    return 0;
}