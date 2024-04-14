#include <bits/stdc++.h>
using namespace std;

int recursive_binarysearch(vector<int> &v,int target , int lo ,int hi ){
    //time complexity = 0(logn)
    //space complexity = 0(logn)
    if (lo>hi) return -1;
    int mid = (lo+hi)/2;
    if(v[mid]==target) return mid;
    else if(v[mid]>target){
        return recursive_binarysearch(v,target,lo,mid-1);
    }
    else{
        return recursive_binarysearch(v,target,mid+1,hi);
    }
}


int main(){
    vector<int> v={1,2,4,6,7,8,10,13,15,25,45,90};
    int target = 29;
    int lo=0;
    int hi = v.size()-1;
    cout<<recursive_binarysearch(v,target,lo,hi);
    return 0;
}