/*
A peak element is a element that is strictly greater than its neighbouring .
given 0-based indexing , find a peak element , return it's index 
If there are multiple peak elements return the inde of any peak element 
*/

/*
Given a mountain array 'a' of length greater than 3 ,return the index i such that 
arr[0]<arr[1]<...<arr[i-1]<arr[i]>arr[i+1]>...>arr[arr.length()-1] 
this is known as peak element. 
input -? [0,4,1,0] , ans->1
*/


#include <bits/stdc++.h>
using namespace std;


int peakelement(vector<int> &v){
    int lo =0 , hi =v.size()-1;
    int n=v.size();
    while(lo<=hi){
        int mid = lo + (hi - lo)/2;
        if(mid ==0){
            if(v[mid]>v[mid+1]){
                return 0;
            }
            else{
                return 1;
            }
        }
        else if(mid  ==n-1){
            if(v[mid]>v[mid-1]){
                return n-1;
            }
            else{
                return n-2;
            }
        }
        else{
            if(v[mid]>v[mid-1] && v[mid]>v[mid+1]) return mid;
            if(v[mid]>v[mid-1]){
                lo = mid+1;
            }
            else{
                hi = mid -1;
            }
        }
    }
    return -1;
}

int main(){
    vector<int> v={3,4,5,1,9,10,26,8,2};
    cout<<peakelement(v)<<endl;
    return 0;
}