/*
Given a mountain array 'a' of length greater than 3 ,return the index i such that 
arr[0]<arr[1]<...<arr[i-1]<arr[i]>arr[i+1]>...>arr[arr.length()-1] 
this is known as peak element. 
input -? [0,4,1,0] , ans->1
*/


#include <bits/stdc++.h>
using namespace std;


int peakelement(vector<int> &v){

    int lo =1,hi = v.size()-1;
    int ans = -1;
    while(lo<=hi){
        int mid = lo  +(hi - lo)/2;
        if(v[mid]>v[mid -1]){
            ans = max (ans , mid);
            lo = mid +1;
        }
        else{
            hi = mid -1;
        }
    }
    return ans ;





    // int lo =0 , hi =v.size()-1;
    // while(lo<=hi){
    //     int mid = lo + (hi - lo)/2;
    //     if(v[mid]>v[mid+1] && v[mid]>v[mid-1]) return mid;
    //     if(v[mid]<v[mid-1] && v[mid-1]>v[mid-2]) return mid-1;
    //     if(v[mid]<v[mid+1] && v[mid+1]>v[mid+2]) return mid +1;
    //     if (v[mid]>v[lo]){
    //         lo = mid+1;
    //     }
    //     else{
    //         hi = mid -1;
    //     }
    //     return -1;
    // }
}

int main(){
    vector<int> v={0,3,4,3,2,1,0};
    cout<<peakelement(v)<<endl;
    return 0;
}