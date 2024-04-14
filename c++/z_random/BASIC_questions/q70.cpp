/*
WAP in java to print the sum of all pairs in array. Extra condition last and first element will also be considered. 
for ex -> [1 , 2 , 3 ,4] -> [3 , 5 , 7 , 5]
explanation -> 1 + 2 gives 3 , 2 + 3 gives 5 , 3 + 4 gives 7 , 4 + 1 gives 5.
*/

#include <bits/stdc++.h>
using namespace std;
int main(){
    int array[]={1,2,3,4};
    int len=sizeof(array)/sizeof(array[0]);
    for(int i=0;i<len;i++){
        if(i!=len-1){
            cout<<array[i]+array[i+1]<<" ";
        }
        else{
            cout<<array[0]+array[i]<<" ";
        }
    }
    return 0;
}