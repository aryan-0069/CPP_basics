/*
Find sum of squares and sum of cubes of all numbers in array. 
For ex- [1 , 2 , 3] -> sum of sq -> 1*1 + 2*2 + 3*3 -> sum of cubes -> 1*1*1 + 2*2*2 + 3*3*3
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    int array[]={1,2,3,4,5};
    int sq=0,cube=0;
    for(int i=0;i<5;i++){
        sq=sq+array[i]*array[i];
        cube+=array[i]*array[i]*array[i];
    }
    cout<<"sq="<<sq<<endl;
    cout<<"cube="<<cube;
    return 0;
}