/*
Given the rotated sorted array of integers which contains distinct element and an integer target return the index of the target 
if it is in array . Otherwise return -1
arr[] = {3,4,5,1,2} , target = 4 
output -> 1
*/

#include <bits/stdc++.h>
using namespace std;

int bs(vector<int> &v,int target){
    int lo =0 , hi =v.size()-1,min=0;
    //finding min ele
    while(lo<=hi){
        int mid = lo + (hi - lo)/2;
        if(v[mid]<v[mid-1]){
            min= mid;
            break;
        }
        if(v[mid]>v[mid+1]){
            min =mid+1;
            break;
        } 
        if(v[mid]>v[lo]){
            lo = mid +1;
        }
        else{
            hi = mid -1;
        }
    } 

    lo = 0,hi = min-1;
    if(v[lo]<=target){
        while(lo<=hi){
            int mid = lo + (hi - lo)/2;
            if(v[mid]==target) return mid;
            else if(v[mid]>target){
                hi = mid -1;
            }
            else{
                lo = mid+1;
            }
        }
    }
    
    else{
        lo = min,hi=v.size()-1;
        while(lo<=hi){
            int mid = lo +(hi -lo)/2;
            if(v[mid] == target) return mid;
            else if(v[mid]>target){
                hi = mid -1;
            }
            else{
                lo = mid +1;
            }
        }
    }
    return -1;

}


int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int target;
    cout<<"Target Element -> ";
    cin>>target;
    //cout<<endl;
    cout<<"Index -> ";
    cout<<bs(v,target)<<endl;
    return 0;
}