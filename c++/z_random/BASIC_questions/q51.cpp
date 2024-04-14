// Take two arrays of same size from user and print all the common elements between them.
//  For ex - arr1 -> [1 , 2, 3] and arr2 -> [1, 3, 4] -> common element is [1], there can be  multiple elements. 
// Condition provided, array provided by the user must be in ascending order (you do not have to sort).

#include <bits/stdc++.h>
using namespace std;
int main(){
    int n=3;
    //cin>>n;
    int array1[n]={1,2,3};
    int array2[n]={1,3,3};
    // for(int i=0;i<n;i++){
    //     cin>>array1[i];
    // }
    // for(int i=0;i<n;i++){
    //     cin>>array2[i];
    // }
    for(int i=0;i<n;i++){
        if(array1[i]==array2[i]){
            cout<<array1[i]<<" " ;
        }
    }
    return 0;
    
}