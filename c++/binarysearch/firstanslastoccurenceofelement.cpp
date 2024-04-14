//find the first and last occurence of a target number in a sorted array
#include <bits/stdc++.h>
using namespace std;

int secondoccurence(vector<int> &v,int target){
    int lo = 0,hi = v.size()-1;
    int last = -1 ;
    while(lo<=hi){
        int mid = lo +(hi-lo)/2;
        if(v[mid]==target){
            last = mid;
            lo = mid +1;
        }
        else if(v[mid]>target){
            hi = mid -1;
        }
        else{
            lo = mid+1;
        }
    }
    return last;
    
}

int firstoccurence(vector<int> &v,int target){
    // this calculates the lower bound
    int first = -1;
    int lo=0,hi=v.size()-1;
    while(lo<=hi){
        int mid = lo + (hi - lo)/2;
        if(v[mid]==target){
            first = mid;
            hi = mid -1;
        }
        else if(v[mid]>target){
            hi = mid -1;
        }
        else{
            lo = mid+1;
        }
    }
    return first;
}



int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int target ;
    cin>>target;

    cout<<firstoccurence(v,target)<<" ";  
    cout<<secondoccurence(v,target)<<endl;
    return 0;
}