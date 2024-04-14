#include <bits/stdc++.h>
using namespace std;

int binarysearchSortedRotated(vector<int> &v,int target){
    int lo =0 , hi = v.size()-1;
    while(lo<=hi){
        int mid = lo + (hi - lo)/2;
        if(v[mid]==target) return mid ;

        if(v[mid]>=v[lo]){
            if(target>=v[lo] and target<v[mid]){
                hi = mid -1;
            }
            else{
                lo = mid +1;
            }
        }
        else{
            if(target>=v[mid] && target <=v[hi]){
                lo = mid +1;
            }
            else{
                hi = mid -1;
            }
        }
    }
    return -1;
}


int main(){
    vector<int> v={4,5,6,7,0,1,2};
    int target = 0;
    cout<<binarysearchSortedRotated(v,target)<<endl;
    return 0;
}