#include <bits/stdc++.h>
using namespace std;

int bs(vector <int> &v,int target){
    //time complexity -> 0(log n) , space complexity -> 0(1)
    int ans =-1;
    int lo = 0;
    int hi = v.size()-1;
    while(lo<=hi){
        int mid = lo +(hi-lo)/2;
        if (v[mid]==target){
            ans = mid;
            hi = mid -1;
        }
        else if(v[mid]>target){
            hi = mid -1;
        }
        else{
            lo = mid +1;
        }
    }
    return ans ; 
}


int main(){
    int n ;
    cin>>n;
    vector<int> v(n);
    for(int i =0;i<n;i++){
        cin>>v[i];
    }
    int target ;
    cin>>target;
    cout<<bs(v,target);
    return 0;
}