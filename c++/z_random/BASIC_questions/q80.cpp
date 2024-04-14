/*
Write a Java program that prints the missing letter from an array of increasing letters 
(upper or lower). Assume there will always be one letter missing in the array. 
Example:
Original array of elements:
[p, r, s, t]
Missing letter in the said array: q
*/

#include <bits/stdc++.h>
using namespace std;
int main(){
    char array[]={'p','r','s','t'};
    int len=sizeof(array)/sizeof(array[0]);
    for(int i=1;i<len;i++){
        if(int(array[i])-1==int(array[i-1])){
            continue;
        }
        else{
            cout<<char(int(array[i])-1);
            break;
        }
    }

    return 0;
}