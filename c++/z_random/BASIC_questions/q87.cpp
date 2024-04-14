/*
There are n stones on the table in a row, each of them can be red, green or blue. 
Count the minimum number of stones to take from the table so that any two neighboring stones had different colors. 
Stones in a row are considered neighboring if there are no other stones between them.
We'll consider the stones in the row numbered from 1 to n from left to right. 
Then the i-th character s equals "R", if the i-th stone is red, "G", if it's green and "B", if it's blue.
*/
//doubt
#include <bits/stdc++.h>
using namespace std;
int main(){
    char array[]={'R','R','R','G','B','B'}; 
    int n=6;
    int counter=0;
    for(int i=0;i<n-1;i++){
        if(array[i]==array[i+1]){
            counter++;
            for(int j=i;j<n;j++){
                array[j]=array[j+1];
            }
            --i;
        }
        else{
            continue;
        }
    }
    for(int i=0;i<n-counter;i++){
        cout<<array[i];
    }

    return 0;
}