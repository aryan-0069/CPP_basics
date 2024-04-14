/*
Write a cpp program to remove a specific element from an array.
for example -> [1, 2, 3] -> remove 2 then new array should be -> [1, 3], note -> 
remove all instance of element i.e if user says remove element 2 then remove all 2's from the array.
*/

#include <bits/stdc++.h>
using namespace std;
int main(){
    int array[]={2,2,2,5,2,3};
    int targetnum=2; 
    int n=6;
    int counter=0;
    for(int i=0;i<n;i++){
        if(array[i]==targetnum){
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