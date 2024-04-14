//Write a Java program to find the index of an array element.

#include <bits/stdc++.h>
using namespace std;
int main(){
    int array[]={1,2,3,4,5};
    int x=3;
    for(int i=0;i<5;i++){
        if(array[i]==x){
            cout<<i;
        }
    }
    return 0;
}