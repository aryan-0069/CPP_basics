//VERY IMPORTANT PATTERN
//counting all the subsequence with a target sum

//TIME COMPLEXITY = 

#include <bits/stdc++.h>
using namespace std;

int targetSubsequence(int curr_idx,vector<int> &arr,int sum){
    int n = arr.size();
    if(sum < 0){
        return 0;
    }
    if(curr_idx == n){
        if(sum == 0){
            return 1;
        }
        return 0;
    }

    int a = targetSubsequence(curr_idx+1,arr,sum-arr[curr_idx]); // adding the currrent index in the subsequence
    int b = targetSubsequence(curr_idx+1,arr,sum); // not adding the current index in the subsequence
    return a+b;
    
    //alternate way
    // return targetSubsequence(curr_idx+1,arr,sum-arr[curr_idx]) + targetSubsequence(curr_idx+1,arr,sum);

}


int main(){
    vector<int> arr = {1,2,3};
    int sum = 3;
    cout << targetSubsequence(0,arr,sum) << endl;
    return 0;
}