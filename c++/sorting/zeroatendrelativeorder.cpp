//given an integer array move all zero to the end of the array without changing the relative order of non-zero element 
//eg. 504012  ->  541200

#include <bits/stdc++.h>
using namespace std;
int main(){

    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //better approach -> idea is to count 0 and just add it add the end of array
    int zero_cnt = 0;
    for(auto it:arr){
        if(it == 0)zero_cnt++;
    }
    vector<int> ans;
    for(int i=0;i<n;i++){
        if(arr[i]!=0) ans.push_back(arr[i]);
    }
    for(int i=0;i<zero_cnt;i++){
        ans.push_back(0);
    }
    for(auto it:ans){
        cout << it << " ";
    }
    cout << endl;

    //naive approach
    // //054021 -> 542100
    // for(int i=0;i<n;i++){
    //     int j=i;
    //     while(arr[j]==0 && j+1<n){
    //         if(arr[j]==0 && arr[j+1]!=0){
    //             swap(arr[j],arr[j+1]);
    //             j++;
    //         }
    //         j++;
    //     }
    // }
    // for(int i=0;i<n;i++){
    //     cout<<arr[i]<<" ";
    // }


    return 0;
}
