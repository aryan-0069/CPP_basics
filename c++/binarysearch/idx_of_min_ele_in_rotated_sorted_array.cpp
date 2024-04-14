//find the minimun element's index in sorted rotated array

#include <bits/stdc++.h>
using namespace std;

int minimun_ele_idx(vector<int> &v){
    //tc -> 0(log n) , sc -> 0(1)
    if(v.size()==1) return 0; //size of array is 1. so , it's min element must be at index 0.
    int lo =0;
    int hi =v.size()-1;
    if (v[lo]<v[hi]) return lo ; //sorted array.

    while(lo<=hi){
        int mid = lo + (hi - lo)/2;
        if(v[mid]>v[mid+1]) return mid+1;
        if(v[mid]<v[mid-1]) return mid;
        if (v[mid]>v[lo]){
            lo = mid+1;
        }
        else{
            hi = mid -1;
        }
    }
    return -1;
}


int main(){
    vector<int> v={4,5,1,2,3};
    cout<<minimun_ele_idx(v)<<endl;
    return 0;
}