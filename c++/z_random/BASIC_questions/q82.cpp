//Given an array of integers sorted in ascending order, find the starting and ending position of a given value [1,1,1,2,3,4] -> 0 & 2

#include <bits/stdc++.h>
using namespace std;
int main(){
    int array[]={0,1,1,1,3,4};
    int n=sizeof(array)/sizeof(array[0]);
    int val=1,starting=0,ending=0;
    int counter=0;
    for(int i=0;i<n;i++){
        if(val==array[i]){
            for(int j=i+1;j<n;j++){
                if(array[i]==array[j]){
                    counter++;
                    ending=j;
                }
            }
            break;
        }
    }
    starting=ending-counter;
    cout<<"Starting = "<<starting<<" "<<"Endinng = "<<ending<<endl;
    return 0;
}