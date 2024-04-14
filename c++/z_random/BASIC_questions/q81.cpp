//Take an array of 10 elements. Split it into middle and store the elements in two different arrays, 
//and print the prefix sum of both the arrays.

#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int n=sizeof(arr)/sizeof(arr[0]);
    int arr1[5];
    int arr2[5];
    for(int i=0;i<n/2;i++){
        arr1[i]=arr[i];
        arr2[i]=arr[i+5];
    }
    
    for(int i=1;i<n/2;i++){
        arr1[i]= arr1[i-1] + arr1[i];
    }
    for(int i=1;i<n/2;i++){
        arr2[i]= arr2[i-1] + arr2[i];
    }
    cout<<"array1 = ";
    for(int i=0;i<n/2;i++){
        cout<<arr1[i]<<" ";
    }

    cout<<"array2 = ";
    for(int i=0;i<n/2;i++){
        cout<<arr2[i]<<" ";
    }
    return 0;
}