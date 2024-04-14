#include <bits/stdc++.h>
using namespace std;

int lowerbound(vector<int> &v,int target){ //first index >= target
    //time complexity -> 0(log n) , space complexity -> 0(1)
    int first = -1;
    int lo=0;
    int hi=v.size()-1;
    while(lo<=hi){
        int mid = lo + (hi- lo)/2;
        if(v[mid]>=target){
            first = mid;
            hi=mid - 1;
        }
        else{
            lo = mid+1;
        }
    }
    return first;
}


int upperbound(vector <int> &v,int target){ //first index > target
    //time complexity -> 0(log n) , space complexity -> 0(1)
    int last = -1;
    int lo =0 ;
    int hi = v.size()-1;
    while(lo<=hi){
        int mid = lo+(hi - lo)/2;
        if(v[mid]>target){
            last = mid;
            hi = mid -1;
        }
        else{
            lo = mid +1;
        }
    }
    return last ;
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


    //as per question modifing
    vector<int> ans (2);
    int lb = lowerbound(v,target);
    if(v[lb] != target){
        ans.push_back(-1);
        ans.push_back(-1);
    }
    else{
        int up=upperbound(v,target);
        ans.push_back(lb);
        ans.push_back(up);
    }
    
    return 0;
}