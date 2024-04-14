#include <bits/stdc++.h>
using namespace std;

int binarysearch(vector<int> &v,int target){
    //time complexity = 0(logn)
    //space complexity = 0(1)
    int lo = 0;
    int hi = v.size() - 1;
    while(lo<=hi){
        int mid = (lo + hi)/2;
        if(v[mid]==target) return mid;
        
        else if(v[mid] > target){
            hi = mid -1;
        }

        else{
            lo = mid +1;
        }
    }
    return -1;
}



int main(){
    vector<int> v={1,2,4,6,7,8,10,13,15,25,45,90};
    int target = 25;
    cout<<binarysearch(v,target);
    return 0;
}