#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    
    for(int i=0;i<n;i++)cin>>arr[i];

    // for(int i=0;i<n-1;i++){
    //     bool flag=false;
    //     for(int j=0;j<n-1;j++){
    //         if(arr[j]>arr[j+1]){
    //             swap(arr[j],arr[j+1]);
    //         }
    //     }
    //     if(flag==false)break; //only effective in nearly sorted array cases , not helpful in worst case scenarios
    // }

    //most effective->
    //worst tc -> O(n^2){when it is sorted in descending order} , best tc->O(n){when it is already sorted}
    for(int i=n-1;i>=0;i--){
        int swaps=0;
        for(int j=0;j<=i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                swaps++;
            }

        }
        if(swaps==0){
            break; 
        }
    }
    for(int i=0;i<n;i++)cout<<arr[i]<<" ";



    //another way ->
    // for(int i=0;i<n-1;i++){
    //     for(int j=i+1;j<n-1;j++){
    //         if(arr[i]>arr[j]){
    //             swap(arr[j],arr[i]);
    //         }
    //     }
    // }
    //for(int i=0;i<n;i++)cout<<arr[i]<<" ";
    
    return 0;
}