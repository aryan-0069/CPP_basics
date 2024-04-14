#include <bits/stdc++.h>
using namespace std;
int main(){

    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=0;i<n-1;i++){

        //finding min index
        int min_idx=i;
        for(int j=i+1;j<n;j++){
            if(arr[min_idx]>arr[j]){
                min_idx=j; 
            }
        }

        //swapping min ele in begining
        if(i!=min_idx){
            swap(arr[i],arr[min_idx]);
        }

    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }


    return 0;
}